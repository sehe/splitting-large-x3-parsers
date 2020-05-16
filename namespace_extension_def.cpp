#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const namespace_extension_type namespace_extension_ = "";
    const auto namespace_extension__def = "" > identifier() > namespace_scope();
    BOOST_SPIRIT_DEFINE(namespace_extension_);
} // namespace parser
parser::namespace_extension_type namespace_extension() { return parser::namespace_extension_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(namespace_extension_type, iterator_type, context_type);
}
