#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const set_statement_type set_statement_ = "";
    const auto set_statement__def = "" > parameter_pack() > set_policy() > parameter_pack();
    BOOST_SPIRIT_DEFINE(set_statement_);
} // namespace parser
parser::set_statement_type set_statement() { return parser::set_statement_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(set_statement_type, iterator_type, context_type);
}
