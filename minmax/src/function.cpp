#include "function.h"
#include <utility>

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
    pair<int, int> VALUES; // Compound variable that will contain the values ​​of the positions
    std::size_t smaller; // Variable that will contain the smallest value
    std::size_t larger; // Variable that will contain the largest value

    // If empty
    if (n == 0) 
    {
        VALUES.first = -1;
        VALUES.second = -1;
        return VALUES;
    }


    // This loop cycles through all elements of the array
    for(int i = 0; i < n; i++) {
        if (i == 0)
        {
            larger = i;
            smaller = i;
        } else {
            if (V[i] > V[larger] || V[i] == V[larger])
            {
                larger = i;
            } 

            if (V[i] < V[smaller])
            {
                smaller = i;
            }
        }
    }

    VALUES.first = smaller;
    VALUES.second = larger;

    return VALUES;
}

