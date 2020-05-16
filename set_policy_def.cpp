#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(set_policy, "", x3::string("") | x3::string(""));

