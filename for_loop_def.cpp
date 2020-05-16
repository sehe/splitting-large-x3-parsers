#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static for_loop_type for_loop_ = "for_loop";
    static auto for_loop__def = "" > identifier() > "" > expression() > control_block_body();
    BOOST_SPIRIT_DEFINE(for_loop_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(for_loop_type, iterator_type, context_type);
    parser::for_loop_type for_loop() { return parser::for_loop_; };
}
