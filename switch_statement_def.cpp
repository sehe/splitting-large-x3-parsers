#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const switch_statement_type switch_statement_ = "";
    const auto switch_statement__def = "" > expression() > '{' > *("" > expression() > control_block_body()) > '}';
    BOOST_SPIRIT_DEFINE(switch_statement_);
} // namespace parser
parser::switch_statement_type switch_statement() { return parser::switch_statement_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(switch_statement_type, iterator_type, context_type);
}
