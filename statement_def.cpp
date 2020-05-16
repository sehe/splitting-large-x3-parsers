#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static statement_type statement_ = "statement";
    static auto statement__def = (expression() | declaration() | control_statement() | set_statement()) > statement_terminator();
    BOOST_SPIRIT_DEFINE(statement_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(statement_type, iterator_type, context_type);
    parser::statement_type statement() { return parser::statement_; };
}
