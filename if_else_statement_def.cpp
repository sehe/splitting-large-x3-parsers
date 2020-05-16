#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static if_else_statement_type if_else_statement_ = "";
    static auto if_else_statement__def = "" > expression() > control_block_body() > ("" > control_block_body());
    BOOST_SPIRIT_DEFINE(if_else_statement_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(if_else_statement_type, iterator_type, context_type);
    parser::if_else_statement_type if_else_statement() { return parser::if_else_statement_; };
}
