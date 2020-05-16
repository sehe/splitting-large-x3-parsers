#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static compound_statement_type compound_statement_ = "";
    static auto compound_statement__def = '{' > *statement() > '}';
    BOOST_SPIRIT_DEFINE(compound_statement_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(compound_statement_type, iterator_type, context_type);
    parser::compound_statement_type compound_statement() { return parser::compound_statement_; };
}
