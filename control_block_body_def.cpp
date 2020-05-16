#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const control_block_body_type control_block_body_ = "";
    const auto control_block_body__def = (':' > statement()) | compound_statement();
    BOOST_SPIRIT_DEFINE(control_block_body_);
} // namespace parser
parser::control_block_body_type control_block_body() { return parser::control_block_body_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(control_block_body_type, iterator_type, context_type);
}
