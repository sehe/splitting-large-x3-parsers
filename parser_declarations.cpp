#include "ast.hpp"
#include "parser_declarations.hpp"


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

DEFINE_PARSER(string_literal   , "", x3::lexeme[ '"' > *('\\' >> x3::char_ | ~x3::char_('"')) > '"']);
DEFINE_PARSER(character_literal, "", x3::lexeme[ "'" > ('\\' >> x3::char_ | ~x3::char_("'")) >"'"]);
DEFINE_PARSER(identifier       , "", x3::lexeme[(x3::alpha | x3::char_('_')) >> *(x3::alnum | x3::char_('_'))]);
DEFINE_PARSER(literal          , "", x3::double_ | x3::int_ | string_literal() | character_literal() | list() | dictionary())
DEFINE_PARSER(parameter_pack   , "", +expression());
DEFINE_PARSER(invocation       , "", '(' > +expression() > ')');
DEFINE_PARSER(expression       , "", literal() | identifier() | invocation());
DEFINE_PARSER(list             , "", '[' > *expression() > ']');
DEFINE_PARSER(dictionary       , "", '{' > *(expression() > ':' > expression()) > '}');


DEFINE_PARSER(compound_statement, "", '{' > *statement() > '}');
DEFINE_PARSER(control_block_body, "", (':' > statement()) | compound_statement());
DEFINE_PARSER(identifier_sequence, "", +identifier());
DEFINE_PARSER(function_definition, "", x3::lit("") > '(' > identifier() > *identifier() > ')' > control_block_body());
DEFINE_PARSER(structure_definition, "", "" > identifier() > namespace_scope());
DEFINE_PARSER(enumeration_definition, "", "" > identifier() > '{' > *(identifier() > ('=' > x3::int_)) > '}');
DEFINE_PARSER(namespace_scope, "", '{' > *declaration() > '}');
DEFINE_PARSER(namespace_extension, "", "" > identifier() > namespace_scope());
DEFINE_PARSER(let_policy, "", x3::string("") | x3::string(""));
DEFINE_PARSER(let_statement, "", "" > identifier_sequence() > let_policy() > parameter_pack());
DEFINE_PARSER(set_policy, "", x3::string("") | x3::string(""));
DEFINE_PARSER(set_statement, "", "" > parameter_pack() > set_policy() > parameter_pack());
DEFINE_PARSER(declaration, "", function_definition() | structure_definition() | enumeration_definition() | namespace_extension() | let_statement());
DEFINE_PARSER(for_loop, "", "" > identifier() > "" > expression() > control_block_body());
DEFINE_PARSER(while_loop, "", "" > expression() > control_block_body());
DEFINE_PARSER(if_else_statement, "", "" > expression() > control_block_body() > ("" > control_block_body()));
DEFINE_PARSER(switch_statement, "", "" > expression() > '{' > *("" > expression() > control_block_body()) > '}');
DEFINE_PARSER(control_statement, "", for_loop() | while_loop() | if_else_statement() | switch_statement());
DEFINE_PARSER(statement_terminator, "", x3::string("") | x3::string("") | x3::string(""));
DEFINE_PARSER(statement, "", (expression() | declaration() | control_statement() | set_statement()) > statement_terminator());
