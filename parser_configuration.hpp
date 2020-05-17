#pragma once

//#include "utilities.hpp"
#include <boost/spirit/home/x3.hpp>
namespace x3 = boost::spirit::x3;

namespace parser {
    using iterator_type = std::string::const_iterator;
    using context_type = x3::phrase_parse_context<x3::ascii::space_type>::type;
}

#define X3_DEFINE_AND_INSTANTIATE(name, ...)                                   \
    namespace parser {                                                         \
        name##_type const& safe_##name() {                                     \
            static name##_type name##_ = #name;                                \
            return name##_;                                                    \
        };                                                                     \
        template <typename Iterator, typename Context>                         \
        inline bool parse_rule(name##_type, Iterator& first, Iterator const& last, Context const& context, name##_type::attribute_type& attr) {                                        \
            using boost::spirit::x3::unused;                                   \
            static auto const def_ = (safe_##name() = (__VA_ARGS__));          \
            return def_.parse(first, last, context, unused, attr);             \
        }                                                                      \
        BOOST_SPIRIT_INSTANTIATE(name##_type, iterator_type, context_type);    \
        name##_type name() { return safe_##name(); };                          \
    }
