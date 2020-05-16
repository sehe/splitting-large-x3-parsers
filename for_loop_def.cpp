#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(for_loop, "", "" > identifier() > "" > expression() > control_block_body());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(for_loop_type, iterator_type, context_type);
}
