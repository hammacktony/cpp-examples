#include <vector>
#include <iostream>
#include <math.h>

#include "includes/discriminant.hpp"

namespace solver
{
    /*
    Given the coefficients, compute the discriminant
    */
    double discriminant(const std::vector<double>& coefficients)
    {
        return coefficients[1] * coefficients[1] - 4 * coefficients[0] * coefficients[1];
    };

    /*
    Given the discriminant, dispay the correct root
    */
    void get_roots(const std::vector<double> coefficients, const double d)
    {
        std::vector<double> retval;
        if (d < 0)
        {
            retval = complex_roots(coefficients, d);
            std::cout << "There are complex roots: " << std::endl;
            std::cout << "Complex root 1 = " << retval[0] << "+" << retval[1] << "i" <<std::endl;
            std::cout << "Complex root 2 = " << retval[0] << "-" << retval[1] << "i" <<std::endl;
        } else if (d == 0) {
            retval = one_root(coefficients, d);
            std::cout << "There is one real root: " << std::endl;
            std::cout << "Real root = " << retval[0] <<std::endl;
        } else {
            retval = real_roots(coefficients, d);
            std::cout << "There are real roots: " << std::endl;
            std::cout << "Real root 1 = " << retval[0] << std::endl;
            std::cout << "Real root 2 = " << retval[1] << std::endl;
        }
    };

    /*
    Compute the real roots, D > 0
    */
    std::vector<double> real_roots(const std::vector<double> coefficients, const double d)
    {
        std::vector<double> retval;
        retval.push_back((-coefficients[1] + sqrt(d)) / (2 * coefficients[0]));
        retval.push_back((-coefficients[1] - sqrt(d)) / (2 * coefficients[0]));
        return retval;
    };

    /*
    Compute the one root, D = 0
    */
    std::vector<double> one_root(const std::vector<double> coefficients, const double d)
    {
        std::vector<double> retval;
        retval.push_back(-coefficients[1] / (2 * coefficients[0]));
        return retval;
    };

    /*
    Compute the complex roots, D < 0
    */
    std::vector<double> complex_roots(const std::vector<double> coefficients, const double d)
    {
        std::vector<double> retval;
        retval.push_back(-coefficients[1] / (2 * coefficients[0]));
        retval.push_back(sqrt(-d) / (2 * coefficients[0]));
        return retval;
    };
}
