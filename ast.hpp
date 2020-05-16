#pragma once

//#include "utilities.hpp"
#include <boost/spirit/home/x3/support/ast/variant.hpp>
#include <boost/spirit/home/x3/support/ast/position_tagged.hpp>
#include <boost/fusion/include/vector.hpp>
namespace x3 = boost::spirit::x3;
namespace fusion = boost::fusion;

namespace {
    struct position_tag_detector {
        template<typename... T>
        static inline constexpr std::true_type call(x3::variant<T...> const&);
        static inline constexpr std::true_type call(x3::position_tagged const&);

        template<typename T, typename = std::enable_if_t<not std::is_base_of_v<x3::position_tagged, T>>>
        static inline constexpr std::false_type call(T const&, ...);
    };

    template <typename T>
        static inline constexpr bool is_position_tagged_v = 
            decltype(position_tag_detector::call(std::declval<T>()))::value;

    template <typename Tag, typename T, typename... Mixins> struct type_alias : T, Mixins... {
        using base = type_alias;
        using T::T, T::operator=;
    };

    template <typename Tag, typename T>
        using alias = std::conditional_t<
            is_position_tagged_v<T>,
            type_alias<Tag, T>,
            type_alias<Tag, T, x3::position_tagged>
        >;
}

#define DEFINE_ATTRIBUTE(name, ...)                                            \
    struct name : alias<class name##_base_access_tag, __VA_ARGS__> {           \
        using base::base, name::base::operator=;                               \
    };

namespace ast {
    DEFINE_ATTRIBUTE(string_literal   , std::string);
    DEFINE_ATTRIBUTE(character_literal, std::string);
    DEFINE_ATTRIBUTE(identifier       , std::string);

    struct list;
    struct dictionary;
    struct expression;

    DEFINE_ATTRIBUTE(literal       , x3::variant<double, int, string_literal, character_literal, x3::forward_ast<list>, x3::forward_ast<dictionary>>);
    DEFINE_ATTRIBUTE(parameter_pack, std::vector<expression>);
    DEFINE_ATTRIBUTE(invocation    , parameter_pack);
    DEFINE_ATTRIBUTE(expression    , x3::variant<literal, identifier, invocation>);
    DEFINE_ATTRIBUTE(list          , std::vector<expression>);
    DEFINE_ATTRIBUTE(dictionary    , std::vector<fusion::vector<expression, expression>>);


    struct statement;
    struct declaration;

    DEFINE_ATTRIBUTE(compound_statement    , std::vector<statement>);
    DEFINE_ATTRIBUTE(control_block_body    , x3::variant<x3::forward_ast<statement>, compound_statement>);
    DEFINE_ATTRIBUTE(identifier_sequence   , std::vector<identifier>);
    DEFINE_ATTRIBUTE(function_definition   , fusion::vector<identifier, std::vector<identifier>, control_block_body>);
    DEFINE_ATTRIBUTE(structure_definition  , fusion::vector<identifier, std::vector<declaration>>);
    DEFINE_ATTRIBUTE(enumeration_definition, fusion::vector<identifier, std::vector<fusion::vector<identifier, int>>>);
    DEFINE_ATTRIBUTE(namespace_scope       , std::vector<declaration>);
    DEFINE_ATTRIBUTE(namespace_extension   , fusion::vector<identifier, namespace_scope>);
    DEFINE_ATTRIBUTE(let_policy            , std::string);
    DEFINE_ATTRIBUTE(let_statement         , fusion::vector<identifier_sequence, let_policy, parameter_pack>);
    DEFINE_ATTRIBUTE(set_policy            , std::string);
    DEFINE_ATTRIBUTE(set_statement         , fusion::vector<parameter_pack, set_policy, parameter_pack>);
    DEFINE_ATTRIBUTE(declaration           , x3::variant<function_definition, structure_definition, enumeration_definition, namespace_extension, let_statement>);
    DEFINE_ATTRIBUTE(for_loop              , fusion::vector<identifier, expression, control_block_body>);
    DEFINE_ATTRIBUTE(while_loop            , fusion::vector<expression, control_block_body>);
    DEFINE_ATTRIBUTE(if_else_statement     , fusion::vector<expression, control_block_body, control_block_body>);
    DEFINE_ATTRIBUTE(switch_statement      , fusion::vector<expression, std::vector<fusion::vector<expression, control_block_body>>>);
    DEFINE_ATTRIBUTE(control_statement     , x3::variant<for_loop, while_loop, if_else_statement, switch_statement>);
    DEFINE_ATTRIBUTE(statement_terminator  , std::string);
    DEFINE_ATTRIBUTE(statement             , fusion::vector<x3::variant<expression, declaration, control_statement, set_statement>, statement_terminator>);
}
