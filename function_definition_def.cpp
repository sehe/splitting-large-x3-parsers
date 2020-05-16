#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const function_definition_type function_definition_ = "";
    const auto function_definition__def = x3::lit("") > '(' > identifier() > *identifier() > ')' > control_block_body();
    BOOST_SPIRIT_DEFINE(function_definition_);
} // namespace parser
parser::function_definition_type function_definition() { return parser::function_definition_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(function_definition_type, iterator_type, context_type);
}
