#include "function.h"
#include <iostream>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    std::string auxiliary; // Auxiliary variable that will temporarily contain a string
    int counter = 1; // Variable that will help count the array backwards

    // This loop will iterate through the array from start to end and end to start
    for(int i = 0; i < arr.size(); i++)
    {
        // When we get halfway through the array, we have the entire array sorted, so we can exit the loop.
        if(i == (int) arr.size() / 2) {
            break;
        }

        // arr[arr.size() - counter] takes elements from end to beginning.
        auxiliary = arr[i];
        arr[i] = arr[arr.size() - counter];
        arr[arr.size() - counter] = auxiliary;
        counter += 1;
    }
}
