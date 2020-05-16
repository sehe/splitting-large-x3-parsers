#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const declaration_type declaration_ = "";
    const auto declaration__def = function_definition() | structure_definition() | enumeration_definition() | namespace_extension() | let_statement();
    BOOST_SPIRIT_DEFINE(declaration_);
} // namespace parser
parser::declaration_type declaration() { return parser::declaration_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(declaration_type, iterator_type, context_type);
}
