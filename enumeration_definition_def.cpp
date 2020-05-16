#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const enumeration_definition_type enumeration_definition_ = "";
    const auto enumeration_definition__def = "" > identifier() > '{' > *(identifier() > ('=' > x3::int_)) > '}';
    BOOST_SPIRIT_DEFINE(enumeration_definition_);
} // namespace parser
parser::enumeration_definition_type enumeration_definition() { return parser::enumeration_definition_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(enumeration_definition_type, iterator_type, context_type);
}
