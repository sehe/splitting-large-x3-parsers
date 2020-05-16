#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(let_policy, "", x3::string("") | x3::string(""));

