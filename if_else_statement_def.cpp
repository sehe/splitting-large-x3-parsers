#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(if_else_statement, "", "" > expression() > control_block_body() > ("" > control_block_body()));

