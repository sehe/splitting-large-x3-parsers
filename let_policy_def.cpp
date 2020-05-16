#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static let_policy_type let_policy_ = "let_policy";
    static auto let_policy__def = x3::string("") | x3::string("");
    BOOST_SPIRIT_DEFINE(let_policy_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(let_policy_type, iterator_type, context_type);
    parser::let_policy_type let_policy() { return parser::let_policy_; };
}
