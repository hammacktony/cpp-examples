#include <iostream>
#include <string>
#include <map>

#include "includes/algorithms.hpp"

namespace vowelchecker {
    /*
    Given input and vowel set, collect all letters that are vowels
    */
    std::map<char, bool> compare(const std::string& input, const std::string& vowels)
    {
        std::map<char, bool> output;
        for (int i = 0; i <= input.size(); i++) {
            for (int j = 0; j < vowels.size(); j++) {
                const char data = ::tolower(input[i]);
                if (data == vowels[j]) {
                    output[data] = true;
                };
            };
        };
        return output;
    };

    /*
    Give processed output, print results to console
    */
    void process_results(const std::string& input, std::map<char, bool>& output)
    {
        if (output.size() == 0)
        {
            std::cout << "No Vowels found." << std::endl;
            return;
        }

        std::cout << "Vowels found for `" << input << "`:" << std::endl;
        for( std::map<char,bool>::iterator iter=output.begin(); iter!=output.end(); ++iter)
        {
            std::cout << (*iter).first << std::endl;
        };
        return;
    };
};