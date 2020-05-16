#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(identifier       , "", x3::lexeme[(x3::alpha | x3::char_('_')) >> *(x3::alnum | x3::char_('_'))]);

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(identifier_type, iterator_type, context_type);
}
