#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(let_statement, "", "" > identifier_sequence() > let_policy() > parameter_pack());

