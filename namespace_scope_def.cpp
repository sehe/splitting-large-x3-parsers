#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(namespace_scope, "", '{' > *declaration() > '}');

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(namespace_scope_type, iterator_type, context_type);
}
