#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const list_type list_ = "";
    const auto list__def = '[' > *expression() > ']';
    BOOST_SPIRIT_DEFINE(list_);
} // namespace parser
parser::list_type list() { return parser::list_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(list_type, iterator_type, context_type);
}
