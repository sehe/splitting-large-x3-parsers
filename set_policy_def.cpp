#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(set_policy, "", x3::string("") | x3::string(""));

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(set_policy_type, iterator_type, context_type);
}
