#include "math.hpp"

const ULLINT math::factorial(const ULLINT n)
{
    if (n == 1)
        return 1;
    return (n-1)*factorial(n);
}

const ULLINT math::combination(const ULLINT n, const ULLINT k)
{
    ULLINT result = 1;
    ULLINT k_current = k;

    for (ULLINT i = n; i >= n-k+1; --i)
    {
        if (i % k_current == 0)
            result *= i/k_current--;
        else
            result *= i;
    }

    for (;k_current >= 1; --k_current)
        result /= k_current;

    return result;
}