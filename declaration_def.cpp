#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(declaration, "", function_definition() | structure_definition() | enumeration_definition() | namespace_extension() | let_statement());

