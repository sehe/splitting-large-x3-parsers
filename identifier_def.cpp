#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    const identifier_type identifier_ = "";
    const auto identifier__def = x3::lexeme[(x3::alpha | x3::char_('_')) >> *(x3::alnum | x3::char_('_'))];
    BOOST_SPIRIT_DEFINE(identifier_);
} // namespace parser
parser::identifier_type identifier() { return parser::identifier_; };

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(identifier_type, iterator_type, context_type);
}
