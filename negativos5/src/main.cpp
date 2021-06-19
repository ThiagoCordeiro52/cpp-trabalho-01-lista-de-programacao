#include <iostream>
using std::cin;
using std::cout;
#include <algorithm>
using std::min;

const int SIZE = 5; // input size.

int main(void)
{
    int value; // Variable that stores each value entered
    int negatives = 0; // Variable that stores the amount of negative values ​​entered

    // Loop to read user values
    for(int i = 0; i < SIZE; i++) 
    {
        cin >> value;
        if (value < 0) 
        {
            negatives += 1;
        }
    }

    cout << negatives << "\n";

    return 0;
}
