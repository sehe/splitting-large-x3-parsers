#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(statement, "", (expression() | declaration() | control_statement() | set_statement()) > statement_terminator());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(statement_type, iterator_type, context_type);
}
