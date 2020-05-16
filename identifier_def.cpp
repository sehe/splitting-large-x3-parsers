#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(identifier       , "", x3::lexeme[(x3::alpha | x3::char_('_')) >> *(x3::alnum | x3::char_('_'))]);

