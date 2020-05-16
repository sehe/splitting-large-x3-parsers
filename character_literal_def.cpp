#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static character_literal_type character_literal_ = "";
    static auto character_literal__def = x3::lexeme["'" > ('\\' >> x3::char_ | ~x3::char_("'")) > "'"];
    BOOST_SPIRIT_DEFINE(character_literal_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(character_literal_type, iterator_type, context_type);
    parser::character_literal_type character_literal() { return parser::character_literal_; };
}
