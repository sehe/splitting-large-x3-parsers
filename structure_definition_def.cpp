#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static structure_definition_type structure_definition_ = "structure_definition";
    static auto structure_definition__def = "" > identifier() > namespace_scope();
    BOOST_SPIRIT_DEFINE(structure_definition_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(structure_definition_type, iterator_type, context_type);
    parser::structure_definition_type structure_definition() { return parser::structure_definition_; };
}
