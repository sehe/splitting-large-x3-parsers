#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(enumeration_definition, "", "" > identifier() > '{' > *(identifier() > ('=' > x3::int_)) > '}');

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(enumeration_definition_type, iterator_type, context_type);
}
