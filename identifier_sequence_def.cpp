#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static identifier_sequence_type identifier_sequence_ = "identifier_sequence";
    static auto identifier_sequence__def = +identifier();
    BOOST_SPIRIT_DEFINE(identifier_sequence_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(identifier_sequence_type, iterator_type, context_type);
    parser::identifier_sequence_type identifier_sequence() { return parser::identifier_sequence_; };
}
