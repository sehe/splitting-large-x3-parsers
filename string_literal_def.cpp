#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const string_literal_type string_literal_ = "";
    const auto string_literal__def = x3::lexeme['"' > *('\\' >> x3::char_ | ~x3::char_('"')) > '"'];
    BOOST_SPIRIT_DEFINE(string_literal_);
} // namespace parser
parser::string_literal_type string_literal() { return parser::string_literal_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(string_literal_type, iterator_type, context_type);
}
