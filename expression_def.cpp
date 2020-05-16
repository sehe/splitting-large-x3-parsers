#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static expression_type expression_ = "";
    static auto expression__def = literal() | identifier() | invocation();
    BOOST_SPIRIT_DEFINE(expression_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(expression_type, iterator_type, context_type);
    parser::expression_type expression() { return parser::expression_; };
}
