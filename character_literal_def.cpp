#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(character_literal, "", x3::lexeme[ "'" > ('\\' >> x3::char_ | ~x3::char_("'")) >"'"]);

