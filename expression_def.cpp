#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const expression_type expression_ = "";
    const auto expression__def = literal() | identifier() | invocation();
    BOOST_SPIRIT_DEFINE(expression_);
} // namespace parser
parser::expression_type expression() { return parser::expression_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(expression_type, iterator_type, context_type);
}
