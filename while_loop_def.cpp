#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(while_loop, "", "" > expression() > control_block_body());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(while_loop_type, iterator_type, context_type);
}
