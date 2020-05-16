#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(literal          , "", x3::double_ | x3::int_ | string_literal() | character_literal() | list() | dictionary())

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(literal_type, iterator_type, context_type);
}
