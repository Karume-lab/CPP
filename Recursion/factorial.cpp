#include "main.hpp"


int getFactorial(int n)
{
    if (n == 1 || n == 0)
        return (1);

    return (n * getFactorial(n - 1));
}