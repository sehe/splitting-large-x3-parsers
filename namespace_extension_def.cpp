#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(namespace_extension, "", "" > identifier() > namespace_scope());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(namespace_extension_type, iterator_type, context_type);
}
