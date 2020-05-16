#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const invocation_type invocation_ = "";
    const auto invocation__def = '(' > +expression() > ')';
    BOOST_SPIRIT_DEFINE(invocation_);
} // namespace parser
parser::invocation_type invocation() { return parser::invocation_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(invocation_type, iterator_type, context_type);
}
