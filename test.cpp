//#define BOOST_SPIRIT_X3_DEBUG
#include <iostream>
#include <iomanip>
#include <fstream>
#include "parser_declarations.hpp"
#include "parser_configuration.hpp"
namespace x3 = boost::spirit::x3;

template <typename Rule>
void exercise(Rule const& rule, std::string const& str) {
    auto f = std::begin(str), l = std::end(str);
    try {
        std::cout << std::quoted(str) << " with rule " << std::quoted(rule.name) << " -> ";
        
        typename Rule::attribute_type attr;
        bool const ok = x3::phrase_parse(f, l, rule, x3::ascii::space, attr);
        std::cout << std::boolalpha << ok;

        if (f != l) {
            std::cout << " Remaining: " << std::quoted(std::string(f, l)) << "\n";
        } else {
            std::cout << std::endl;
        }
    } catch(x3::expectation_failure<std::string::const_iterator> const& ef) {
        std::cout << "Expected " << ef.which() << " at " <<
            std::quoted(std::string(ef.where(), l)) << '\n';
    } catch(std::exception const& e) {
        std::cout << e.what() << "\n";
    }
}

int main() {
    exercise(parser::string_literal(), R"("hello")");
    exercise(parser::identifier(), "identify_me");

#if 0
    exercise(parser::literal_       , "");
    exercise(parser::parameter_pack_, "");
    exercise(parser::invocation_    , "");
    exercise(parser::expression_    , "");
    exercise(parser::list_          , "");
    exercise(parser::dictionary_    , "");

    exercise(parser::compound_statement_, "");
    exercise(parser::control_block_body_, "");
    exercise(parser::identifier_sequence_, "");
    exercise(parser::function_definition_, "");
    exercise(parser::structure_definition_, "");
    exercise(parser::enumeration_definition_, "");
    exercise(parser::namespace_scope_, "");
    exercise(parser::namespace_extension_, "");
    exercise(parser::declaration_, "");
    exercise(parser::for_loop_, "");
    exercise(parser::while_loop_, "");
    exercise(parser::if_else_statement_, "");
    exercise(parser::switch_statement_, "");
    exercise(parser::control_statement_, "");
    exercise(parser::statement_terminator_, "");
    exercise(parser::statement_, "");
#else
    {
        std::ifstream ifs("filename");
        //exercise(statement_, {std::istreambuf_iterator(ifs), {}});
    }
#endif
}
