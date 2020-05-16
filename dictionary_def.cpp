#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static dictionary_type dictionary_ = "";
    static auto dictionary__def = '{' > *(expression() > ':' > expression()) > '}';
    BOOST_SPIRIT_DEFINE(dictionary_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(dictionary_type, iterator_type, context_type);
    parser::dictionary_type dictionary() { return parser::dictionary_; };
}
