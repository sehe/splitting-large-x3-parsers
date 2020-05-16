#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const control_statement_type control_statement_ = "";
    const auto control_statement__def = for_loop() | while_loop() | if_else_statement() | switch_statement();
    BOOST_SPIRIT_DEFINE(control_statement_);
} // namespace parser
parser::control_statement_type control_statement() { return parser::control_statement_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(control_statement_type, iterator_type, context_type);
}
