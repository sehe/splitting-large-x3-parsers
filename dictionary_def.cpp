#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const dictionary_type dictionary_ = "";
    const auto dictionary__def = '{' > *(expression() > ':' > expression()) > '}';
    BOOST_SPIRIT_DEFINE(dictionary_);
} // namespace parser
parser::dictionary_type dictionary() { return parser::dictionary_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(dictionary_type, iterator_type, context_type);
}
