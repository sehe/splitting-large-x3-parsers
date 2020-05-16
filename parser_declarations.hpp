#pragma once

#include "ast.hpp"
#include <boost/spirit/home/x3.hpp>
namespace x3 = boost::spirit::x3;

namespace parser {
    using string_literal_type         = x3::rule<class string_literal_tag,         ast::string_literal>;
    using character_literal_type      = x3::rule<class character_literal_tag,      ast::character_literal>;
    using identifier_type             = x3::rule<class identifier_tag,             ast::identifier>;
    using literal_type                = x3::rule<class literal_tag,                ast::literal>;
    using parameter_pack_type         = x3::rule<class parameter_pack_tag,         ast::parameter_pack>;
    using invocation_type             = x3::rule<class invocation_tag,             ast::invocation>;
    using expression_type             = x3::rule<class expression_tag,             ast::expression>;
    using list_type                   = x3::rule<class list_tag,                   ast::list>;
    using dictionary_type             = x3::rule<class dictionary_tag,             ast::dictionary>;
    using compound_statement_type     = x3::rule<class compound_statement_tag,     ast::compound_statement>;
    using control_block_body_type     = x3::rule<class control_block_body_tag,     ast::control_block_body>;
    using identifier_sequence_type    = x3::rule<class identifier_sequence_tag,    ast::identifier_sequence>;
    using function_definition_type    = x3::rule<class function_definition_tag,    ast::function_definition>;
    using structure_definition_type   = x3::rule<class structure_definition_tag,   ast::structure_definition>;
    using enumeration_definition_type = x3::rule<class enumeration_definition_tag, ast::enumeration_definition>;
    using namespace_scope_type        = x3::rule<class namespace_scope_tag,        ast::namespace_scope>;
    using namespace_extension_type    = x3::rule<class namespace_extension_tag,    ast::namespace_extension>;
    using let_policy_type             = x3::rule<class let_policy_tag,             ast::let_policy>;
    using let_statement_type          = x3::rule<class let_statement_tag,          ast::let_statement>;
    using set_policy_type             = x3::rule<class set_policy_tag,             ast::set_policy>;
    using set_statement_type          = x3::rule<class set_statement_tag,          ast::set_statement>;
    using declaration_type            = x3::rule<class declaration_tag,            ast::declaration>;
    using for_loop_type               = x3::rule<class for_loop_tag,               ast::for_loop>;
    using while_loop_type             = x3::rule<class while_loop_tag,             ast::while_loop>;
    using if_else_statement_type      = x3::rule<class if_else_statement_tag,      ast::if_else_statement>;
    using switch_statement_type       = x3::rule<class switch_statement_tag,       ast::switch_statement>;
    using control_statement_type      = x3::rule<class control_statement_tag,      ast::control_statement>;
    using statement_terminator_type   = x3::rule<class statement_terminator_tag,   ast::statement_terminator>;
    using statement_type              = x3::rule<class statement_tag,              ast::statement>;

    BOOST_SPIRIT_DECLARE(string_literal_type)
    BOOST_SPIRIT_DECLARE(character_literal_type)
    BOOST_SPIRIT_DECLARE(identifier_type)
    BOOST_SPIRIT_DECLARE(literal_type)
    BOOST_SPIRIT_DECLARE(parameter_pack_type)
    BOOST_SPIRIT_DECLARE(invocation_type)
    BOOST_SPIRIT_DECLARE(expression_type)
    BOOST_SPIRIT_DECLARE(list_type)
    BOOST_SPIRIT_DECLARE(dictionary_type)
    BOOST_SPIRIT_DECLARE(compound_statement_type)
    BOOST_SPIRIT_DECLARE(control_block_body_type)
    BOOST_SPIRIT_DECLARE(identifier_sequence_type)
    BOOST_SPIRIT_DECLARE(function_definition_type)
    BOOST_SPIRIT_DECLARE(structure_definition_type)
    BOOST_SPIRIT_DECLARE(enumeration_definition_type)
    BOOST_SPIRIT_DECLARE(namespace_scope_type)
    BOOST_SPIRIT_DECLARE(namespace_extension_type)
    BOOST_SPIRIT_DECLARE(let_policy_type)
    BOOST_SPIRIT_DECLARE(let_statement_type)
    BOOST_SPIRIT_DECLARE(set_policy_type)
    BOOST_SPIRIT_DECLARE(set_statement_type)
    BOOST_SPIRIT_DECLARE(declaration_type)
    BOOST_SPIRIT_DECLARE(for_loop_type)
    BOOST_SPIRIT_DECLARE(while_loop_type)
    BOOST_SPIRIT_DECLARE(if_else_statement_type)
    BOOST_SPIRIT_DECLARE(switch_statement_type)
    BOOST_SPIRIT_DECLARE(control_statement_type)
    BOOST_SPIRIT_DECLARE(statement_terminator_type)
    BOOST_SPIRIT_DECLARE(statement_type)

    parser::string_literal_type         string_literal();
    parser::character_literal_type      character_literal();
    parser::identifier_type             identifier();
    parser::literal_type                literal();
    parser::parameter_pack_type         parameter_pack();
    parser::invocation_type             invocation();
    parser::expression_type             expression();
    parser::list_type                   list();
    parser::dictionary_type             dictionary();
    parser::compound_statement_type     compound_statement();
    parser::control_block_body_type     control_block_body();
    parser::identifier_sequence_type    identifier_sequence();
    parser::function_definition_type    function_definition();
    parser::structure_definition_type   structure_definition();
    parser::enumeration_definition_type enumeration_definition();
    parser::namespace_scope_type        namespace_scope();
    parser::namespace_extension_type    namespace_extension();
    parser::let_policy_type             let_policy();
    parser::let_statement_type          let_statement();
    parser::set_policy_type             set_policy();
    parser::set_statement_type          set_statement();
    parser::declaration_type            declaration();
    parser::for_loop_type               for_loop();
    parser::while_loop_type             while_loop();
    parser::if_else_statement_type      if_else_statement();
    parser::switch_statement_type       switch_statement();
    parser::control_statement_type      control_statement();
    parser::statement_terminator_type   statement_terminator();
    parser::statement_type              statement();
} // namespace parser

