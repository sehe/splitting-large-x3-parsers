#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const statement_type statement_ = "";
    const auto statement__def = (expression() | declaration() | control_statement() | set_statement()) > statement_terminator();
    BOOST_SPIRIT_DEFINE(statement_);
} // namespace parser
parser::statement_type statement() { return parser::statement_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(statement_type, iterator_type, context_type);
}
