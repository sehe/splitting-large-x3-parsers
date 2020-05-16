#include "ast.hpp"
#include "parser_declarations.hpp"

DEFINE_PARSER(literal          , "", x3::double_ | x3::int_ | string_literal() | character_literal() | list() | dictionary())

