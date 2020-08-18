/*
Get user input and list vowels if present
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "includes/algorithms.hpp"


std::string get_input()
{
    std::cout << "Please enter a phrase: " << std::endl;
    std::string input;
    std::cin >> input;
    return input;
};

int main( int argc, char** argv)
{
    // Default vowel set
    const std::string vowels = "aeiou";

    // Get user input
    std::string input = get_input();

    // Find vowels
    std::map<char, bool> output = vowelchecker::compare(input, vowels);

    // Print results to console
    vowelchecker::process_results(input, output);
    return 0;

}