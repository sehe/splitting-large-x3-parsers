#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(switch_statement, "", "" > expression() > '{' > *("" > expression() > control_block_body()) > '}');

