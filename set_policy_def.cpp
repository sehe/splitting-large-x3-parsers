#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const set_policy_type set_policy_ = "";
    const auto set_policy__def = x3::string("") | x3::string("");
    BOOST_SPIRIT_DEFINE(set_policy_);
} // namespace parser
parser::set_policy_type set_policy() { return parser::set_policy_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(set_policy_type, iterator_type, context_type);
}
