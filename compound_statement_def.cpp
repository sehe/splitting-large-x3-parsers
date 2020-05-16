#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(compound_statement, "", '{' > *statement() > '}');

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(compound_statement_type, iterator_type, context_type);
}
