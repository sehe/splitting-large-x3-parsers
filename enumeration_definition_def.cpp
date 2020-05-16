#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(enumeration_definition, "", "" > identifier() > '{' > *(identifier() > ('=' > x3::int_)) > '}');

