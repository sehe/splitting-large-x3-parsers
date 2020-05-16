#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(control_statement, "", for_loop() | while_loop() | if_else_statement() | switch_statement());

