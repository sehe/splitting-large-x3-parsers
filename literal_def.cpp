#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static literal_type literal_ = "";
    static auto literal__def = x3::double_ | x3::int_ | string_literal() | character_literal() | list() | dictionary();
    BOOST_SPIRIT_DEFINE(literal_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(literal_type, iterator_type, context_type);
    parser::literal_type literal() { return parser::literal_; }
}
