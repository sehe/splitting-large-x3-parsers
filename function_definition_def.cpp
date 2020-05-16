#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(function_definition, "", x3::lit("") > '(' > identifier() > *identifier() > ')' > control_block_body());

