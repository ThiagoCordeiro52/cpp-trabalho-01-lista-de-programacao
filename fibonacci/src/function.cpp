#include "function.h"
#include <vector>

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> numbers; // Variable that will contain the fibonacci sequence values

    int firstValue = 1; // First element of the sequence
    int secondValue = 1; // Second element of the sequence
    int sum; // Sum of the first and second elements

    while (firstValue < n) // As long as the first value is less than the flag, the loop continues
    {
        numbers.push_back(firstValue); // Add the first element to the end vector
        sum = firstValue + secondValue; // Add the two elements
        firstValue = secondValue; // Updates the first element, receiving the value of its successor in the sequence
        secondValue = sum; // Updates the second element, getting the sum of its current value plus the value of the first element
    }

    return numbers;
}
