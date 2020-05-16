#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const statement_terminator_type statement_terminator_ = "";
    const auto statement_terminator__def = x3::string("") | x3::string("") | x3::string("");
    BOOST_SPIRIT_DEFINE(statement_terminator_);
} // namespace parser
parser::statement_terminator_type statement_terminator() { return parser::statement_terminator_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(statement_terminator_type, iterator_type, context_type);
}
