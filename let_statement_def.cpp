#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static let_statement_type let_statement_ = "";
    static auto let_statement__def = "" > identifier_sequence() > let_policy() > parameter_pack();
    BOOST_SPIRIT_DEFINE(let_statement_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(let_statement_type, iterator_type, context_type);
    parser::let_statement_type let_statement() { return parser::let_statement_; };
}
