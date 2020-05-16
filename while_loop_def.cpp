#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(while_loop, "", "" > expression() > control_block_body());

