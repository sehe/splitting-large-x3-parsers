#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(namespace_extension, "", "" > identifier() > namespace_scope());

