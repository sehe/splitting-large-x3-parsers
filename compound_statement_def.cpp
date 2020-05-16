#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(compound_statement, "", '{' > *statement() > '}');

