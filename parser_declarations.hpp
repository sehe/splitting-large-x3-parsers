#pragma once

#include "ast.hpp"
#include <boost/spirit/home/x3.hpp>
namespace x3 = boost::spirit::x3;

#define DECLARE_PARSER(name)                                             \
namespace parser {                                                       \
    using name ## _type = x3::rule<class name ## _tag, ast::name, true>; \
    BOOST_SPIRIT_DECLARE(name ## _type)                                  \
}                                                                        \
parser::name ## _type name()

DECLARE_PARSER(string_literal);
DECLARE_PARSER(character_literal);
DECLARE_PARSER(identifier);
DECLARE_PARSER(literal);
DECLARE_PARSER(parameter_pack);
DECLARE_PARSER(invocation);
DECLARE_PARSER(expression);
DECLARE_PARSER(list);
DECLARE_PARSER(dictionary);

DECLARE_PARSER(compound_statement);
DECLARE_PARSER(control_block_body);
DECLARE_PARSER(identifier_sequence);
DECLARE_PARSER(function_definition);
DECLARE_PARSER(structure_definition);
DECLARE_PARSER(enumeration_definition);
DECLARE_PARSER(namespace_scope);
DECLARE_PARSER(namespace_extension);
DECLARE_PARSER(let_policy);
DECLARE_PARSER(let_statement);
DECLARE_PARSER(set_policy);
DECLARE_PARSER(set_statement);
DECLARE_PARSER(declaration);
DECLARE_PARSER(for_loop);
DECLARE_PARSER(while_loop);
DECLARE_PARSER(if_else_statement);
DECLARE_PARSER(switch_statement);
DECLARE_PARSER(control_statement);
DECLARE_PARSER(statement_terminator);
DECLARE_PARSER(statement);

// TODO remove
#define DEFINE_PARSER(name, text, definition) \
namespace parser {                            \
    const name ## _type name ## _ = text;     \
    const auto name ## __def = definition;    \
                                              \
    BOOST_SPIRIT_DEFINE(name ## _);           \
}                                             \
parser::name ## _type name() {                \
    return parser::name ## _;                 \
}

