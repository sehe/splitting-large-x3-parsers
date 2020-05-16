#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(if_else_statement, "", "" > expression() > control_block_body() > ("" > control_block_body()));

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(if_else_statement_type, iterator_type, context_type);
}
