#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static while_loop_type while_loop_ = "";
    static auto while_loop__def = "" > expression() > control_block_body();
    BOOST_SPIRIT_DEFINE(while_loop_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(while_loop_type, iterator_type, context_type);
    parser::while_loop_type while_loop() { return parser::while_loop_; };
}
