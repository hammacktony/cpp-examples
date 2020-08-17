/*
Primarilty test from user's input
*/
#include <iostream>
#include <string>

#include "includes/primes.hpp"
#include "includes/log.hpp"


const std::string MSG_BREAK = "--------------------";

/*
Get user's input
*/
int get_input()
{
    int number;
    std::cin >> number;
    return number;
}


int main(int argc, char **argv)
{
    // Start program and print message
    const std::string message = "Please enter a number:";
    logger(message);

    // Get user input
    const int number = get_input();
    const std::string user_input_message = "Number received: " + std::to_string(number);
    logger(user_input_message);

    const bool response = is_prime(number);

    logger(MSG_BREAK);

    if (response) {
        logger("Number is prime.");
        return 0;
    };
    logger("Number is not prime.");
    return 0;
}
