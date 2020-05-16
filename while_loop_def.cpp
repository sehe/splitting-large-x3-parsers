#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const while_loop_type while_loop_ = "";
    const auto while_loop__def = "" > expression() > control_block_body();
    BOOST_SPIRIT_DEFINE(while_loop_);
} // namespace parser
parser::while_loop_type while_loop() { return parser::while_loop_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(while_loop_type, iterator_type, context_type);
}
