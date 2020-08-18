#pragma once

#include <vector>

namespace solver
{
    /*
    Given the coefficients, compute the discriminant
    */
    double discriminant(const std::vector<double>& coefficients);

    /*
    Given the discriminant, dispay the correct root
    */
    void get_roots(const std::vector<double> coefficients, const double d);

    /*
    Compute the real roots, D > 0
    */
    std::vector<double> real_roots(const std::vector<double> coefficients, const double d);

    /*
    Compute the one root, D = 0
    */
    std::vector<double> one_root(const std::vector<double> coefficients, const double d);

    /*
    Compute the complex roots, D < 0
    */
    std::vector<double> complex_roots(const std::vector<double> coefficients, const double d);
}
