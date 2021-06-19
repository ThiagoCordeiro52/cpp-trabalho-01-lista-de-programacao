/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int n, m; // Variables indicated in the question
    int value; // Variable that assumes consecutive or antecedent numbers
    int sum; // Variable that will store the value of the sum of the numbers
    
    // This loop continues to run as long as two values ​​are entered on standard input.
    while(cin >> m >> n) {
        sum = 0;

        if(n > 0) 
        {
            value = m;

            // This loop runs through the amount of elements needed for the sum.
            for (int i = 0; i < n; i++) 
            {
                sum += value;
                value += 1; 
            }
            cout << sum << "\n";
        }
        else if (n < 0) 
        {
            value = m;

            // This loop runs through the amount of elements needed for the sum.
            // And we change the value of the control variable because it is, in this case, a negative number.
            for (int i = 0; i < (n * -1); i++) 
            {
                sum += value;
                value -= 1; 
            }
            cout << sum <<"\n";
        }
        else { // Here is the case where n is equal to 0, only remaining case
            cout << m << "\n";
        }
    }

    return 0;
}
