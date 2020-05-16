#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(dictionary       , "", '{' > *(expression() > ':' > expression()) > '}');

