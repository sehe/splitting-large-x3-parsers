#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static invocation_type invocation_ = "invocation";
    static auto invocation__def = '(' > +expression() > ')';
    BOOST_SPIRIT_DEFINE(invocation_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(invocation_type, iterator_type, context_type);
    parser::invocation_type invocation() { return parser::invocation_; };
}
