#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(let_policy, "", x3::string("") | x3::string(""));

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(let_policy_type, iterator_type, context_type);
}
