#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(control_block_body, "", (':' > statement()) | compound_statement());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(control_block_body_type, iterator_type, context_type);
}
