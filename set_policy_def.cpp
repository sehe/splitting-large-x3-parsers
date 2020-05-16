#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static set_policy_type set_policy_ = "";
    static auto set_policy__def = x3::string("") | x3::string("");
    BOOST_SPIRIT_DEFINE(set_policy_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(set_policy_type, iterator_type, context_type);
    parser::set_policy_type set_policy() { return parser::set_policy_; };
}
