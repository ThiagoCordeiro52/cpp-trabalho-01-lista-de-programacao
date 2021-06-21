/*! 
 * Remove negative and zero values from an array, preserving the
 * relative order of the original values that will remain in the
 * resulting array.
 * We do not alter the origimal memory associated withe the input
 * array. Rather, we just rearrange the values inside the array
 * and return a pointer to the new 'logical' end of the array,
 * after the processes of eliminating the required elements is
 * finished.
 *
 * @param first Pointer to the beginning of the range we want to filter.
 * @param last Pointer just past the last valid value of the range we want to filter.
 * @return a pointer to the new 'logical' end of the array.
 */
int * filter( int * first, int * last )
{
    int auxiliary; // Auxiliary variable that will receive individual values ​​from the array.

    // Loop that will traverse the entire array
    while (first != last) { 
        //If we find a value less than or equal to zero, we shift all other values ​​to the right one place 
        // to the left, while the value that is less than or equal to zero is shifted to the last position.
        // And we only walk the array if the value that stays in the position is not less than or equal to 0.
        if(* first <= 0) {
            for (int * i = first; i != last; i += 1) {
                if (i == (last - 1)) {
                    break;
                }
                auxiliary = * i;
                * i = * (i + 1);
                * (i + 1) = auxiliary;
            }

            last -= 1;
        } else {
            first += 1;
        }
        
    }
    return last;
}
