#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(for_loop, "", "" > identifier() > "" > expression() > control_block_body());

