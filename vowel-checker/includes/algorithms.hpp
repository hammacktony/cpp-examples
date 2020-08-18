#pragma once

#include <string>
#include <map>

namespace vowelchecker {
    /*
    Given input and vowel set, collect all letters that are vowels
    */
    std::map<char, bool> compare(const std::string& input, const std::string& vowels);

    /*
    Give processed output, print results to console
    */
    void process_results(const std::string& input, std::map<char, bool>& output);
}