#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(dictionary       , "", '{' > *(expression() > ':' > expression()) > '}');

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(dictionary_type, iterator_type, context_type);
}
