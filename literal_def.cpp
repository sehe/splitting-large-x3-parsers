#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(literal,
    x3::double_ | x3::int_ | string_literal() | character_literal() | list() | dictionary()
)
