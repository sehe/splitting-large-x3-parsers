#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(invocation       , "", '(' > +expression() > ')');

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(invocation_type, iterator_type, context_type);
}
