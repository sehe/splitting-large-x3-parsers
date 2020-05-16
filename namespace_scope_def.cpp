#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const namespace_scope_type namespace_scope_ = "";
    const auto namespace_scope__def = '{' > *declaration() > '}';
    BOOST_SPIRIT_DEFINE(namespace_scope_);
} // namespace parser
parser::namespace_scope_type namespace_scope() { return parser::namespace_scope_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(namespace_scope_type, iterator_type, context_type);
}
