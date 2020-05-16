#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(parameter_pack   , "", +expression());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(parameter_pack_type, iterator_type, context_type);
}
