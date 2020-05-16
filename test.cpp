//#define BOOST_SPIRIT_X3_DEBUG
#include <iostream>
#include <iomanip>
#include <fstream>
#include "parser_declarations.hpp"
namespace x3 = boost::spirit::x3;

template <typename Rule>
void exercise(Rule const& rule, std::string const& str) {
    auto f = std::begin(str), l = std::end(str);
    try {
        std::cout << std::quoted(str) << " with rule " << std::quoted(rule.name) << " -> ";
        
        bool const ok = x3::phrase_parse(f, l, rule, x3::ascii::space);
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
    exercise(string_literal(), R"("hello")");
    exercise(identifier(), "identify_me");

#if 0
    exercise(literal_       , "");
    exercise(parameter_pack_, "");
    exercise(invocation_    , "");
    exercise(expression_    , "");
    exercise(list_          , "");
    exercise(dictionary_    , "");

    exercise(compound_statement_, "");
    exercise(control_block_body_, "");
    exercise(identifier_sequence_, "");
    exercise(function_definition_, "");
    exercise(structure_definition_, "");
    exercise(enumeration_definition_, "");
    exercise(namespace_scope_, "");
    exercise(namespace_extension_, "");
    exercise(declaration_, "");
    exercise(for_loop_, "");
    exercise(while_loop_, "");
    exercise(if_else_statement_, "");
    exercise(switch_statement_, "");
    exercise(control_statement_, "");
    exercise(statement_terminator_, "");
    exercise(statement_, "");
#else
    {
        std::ifstream ifs("filename");
        //exercise(statement_, {std::istreambuf_iterator(ifs), {}});
    }
#endif
}
