#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(set_statement, "", "" > parameter_pack() > set_policy() > parameter_pack());

