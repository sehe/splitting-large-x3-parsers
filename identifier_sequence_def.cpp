#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(identifier_sequence, "", +identifier());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(identifier_sequence_type, iterator_type, context_type);
}
