#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(statement_terminator, "", x3::string("") | x3::string("") | x3::string(""));

