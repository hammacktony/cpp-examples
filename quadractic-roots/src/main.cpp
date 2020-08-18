#include <iostream>
#include <vector>

#include "includes/discriminant.hpp"


std::vector<double> get_input()
{
    double a, b, c;

    std::cout << "Enter coefficient for 'a': " ;
    std::cin >> a;
    std::cout << std::endl;

    std::cout << "Enter coefficient for 'b': " ;
    std::cin >> b;
    std::cout << std::endl;

    std::cout << "Enter coefficient for 'c': " ;
    std::cin >> c;
    std::cout << std::endl;

    std::vector<double> retval;
    retval.push_back(a);
    retval.push_back(b);
    retval.push_back(c);
    return retval;
};

int main(int argc, char **argv)
{
    const std::vector<double> coefficients = get_input();

    if (coefficients[0] <= 0)
    {
        std::cout << "'a' cannot be negative." << std::endl;
        return 1;
    }

    const double discriminant = solver::discriminant(coefficients);
    std::cout << "The discriminant is: " << discriminant << std::endl;

    solver::get_roots(coefficients, discriminant);
}