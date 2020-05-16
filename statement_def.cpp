#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(statement, "", (expression() | declaration() | control_statement() | set_statement()) > statement_terminator());

