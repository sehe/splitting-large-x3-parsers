#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const compound_statement_type compound_statement_ = "";
    const auto compound_statement__def = '{' > *statement() > '}';
    BOOST_SPIRIT_DEFINE(compound_statement_);
} // namespace parser
parser::compound_statement_type compound_statement() { return parser::compound_statement_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(compound_statement_type, iterator_type, context_type);
}
