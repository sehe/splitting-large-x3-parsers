#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static string_literal_type string_literal_ = "";
    static auto string_literal__def = x3::lexeme['"' > *('\\' >> x3::char_ | ~x3::char_('"')) > '"'];
#if 0
    template <typename Iterator, typename Context, typename Attribute>
    inline bool parse_rule(decltype(string_literal_), Iterator& first, Iterator const& last, Context const& context, Attribute& attr) {
        using boost::spirit::x3::unused;
        static auto const def_ = (string_literal_ = string_literal__def);
        return def_.parse(first, last, context, unused, attr);
    };
#else
    BOOST_SPIRIT_DEFINE(string_literal_);
#endif
} // namespace parser

namespace parser {
#if 0
    template bool parse_rule<iterator_type, context_type, string_literal_type::attribute_type>
        (string_literal_type rule_, iterator_type& first, iterator_type const& last,
            context_type const& context, string_literal_type::attribute_type& attr);
    ;
#else
    BOOST_SPIRIT_INSTANTIATE(string_literal_type, iterator_type, context_type);
#endif
    parser::string_literal_type string_literal() { return parser::string_literal_; };
}
