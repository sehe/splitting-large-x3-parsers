#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const identifier_sequence_type identifier_sequence_ = "";
    const auto identifier_sequence__def = +identifier();
    BOOST_SPIRIT_DEFINE(identifier_sequence_);
} // namespace parser
parser::identifier_sequence_type identifier_sequence() { return parser::identifier_sequence_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(identifier_sequence_type, iterator_type, context_type);
}
