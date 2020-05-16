#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static list_type list_ = "list";
    static auto list__def = '[' > *expression() > ']';
    BOOST_SPIRIT_DEFINE(list_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(list_type, iterator_type, context_type);
    parser::list_type list() { return parser::list_; };
}
