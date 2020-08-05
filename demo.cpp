//
// Calculate Fibonacci numbers.
//
#include <stdexcept>
#include "demo.hpp"

static unsigned long fib_recursive(unsigned index, unsigned iteration, unsigned long prev2, unsigned long prev1)
{
    auto sum = prev2 + prev1;

    // Check for overflow.
    if (sum < prev1)
        throw std::runtime_error("Fibonacci overflow");

    iteration++;
    if (iteration == index)
        return sum;

    // Use tail recursion.
    return fib_recursive(index, iteration, prev1, sum);
}

unsigned long fibonacci(unsigned index)
{
    if (index < 2)
        return index;

    return fib_recursive(index, 1, 0, 1);
}
