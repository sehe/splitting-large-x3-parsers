#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(expression       , "", literal() | identifier() | invocation());
