#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(control_block_body, "", (':' > statement()) | compound_statement());

