#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static parameter_pack_type parameter_pack_ = "";
    static auto parameter_pack__def = +expression();
    BOOST_SPIRIT_DEFINE(parameter_pack_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(parameter_pack_type, iterator_type, context_type);
    parser::parameter_pack_type parameter_pack() { return parser::parameter_pack_; };
}
