#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static enumeration_definition_type enumeration_definition_ = "";
    static auto enumeration_definition__def = "" > identifier() > '{' > *(identifier() > ('=' > x3::int_)) > '}';
    BOOST_SPIRIT_DEFINE(enumeration_definition_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(enumeration_definition_type, iterator_type, context_type);
    parser::enumeration_definition_type enumeration_definition() { return parser::enumeration_definition_; };
}
