#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(structure_definition, "", "" > identifier() > namespace_scope());

