/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
#include <map>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    std::map<std::string, double>values; // Creating the container that represents the scatter table, named values.

    values["first"] = 0; // First numerical range: closed at 0 and open at 25
    values["second"] = 0; // Second numerical range: closed at 25 and open at 50
    values["third"] = 0; // Third numerical range: closed at 50 and open at 75
    values["fourth"] = 0; // Fourth numerical range: closed at 75 and open at 100
    values["fifth"] = 0; // Values ​​that are outside the ranges, that is, less than zero or greater than or equal to 100
    int x; // Variable that will store the values ​​read by standard input
    int counter = 0; // Variable that will store the total amount of values

    while(cin >> std::ws >> x) // Looping continues while values ​​are entered
    {   
        if(x < 0 || x >= 100) 
        {
            values["fifth"] += 1;
        } else if (x >= 0 && x < 25)
        {
            values["first"] += 1;
        } else if(x >= 25 && x < 50)
        {
            values["second"] += 1;
        } else if (x >= 50 && x < 75) 
        {
            values["third"] += 1;
        } else if (x >= 75 && x < 100) {
            values["fourth"] += 1;
        }
    }

    counter += values["first"] + values["second"] + values["third"] + values["fourth"] + values["fifth"];

    // Below is the division of the amount of each interval by the total,
    // to find out the percentage that there is of each interval.
    values["first"] = values["first"] / counter; 
    values["second"] = values["second"] / counter;
    values["third"] = values["third"] / counter;
    values["fourth"] = values["fourth"] / counter;
    values["fifth"] = values["fifth"] / counter;

    // We multiply by 100 to get the percentage value. We use setprecision to get a 4-digit numeric precision
    cout << std::setprecision(4) << values["first"] * 100  << "\n";
    cout << std::setprecision(4) << values["second"] * 100  << "\n";
    cout << std::setprecision(4) << values["third"] * 100 << "\n";
    cout << std::setprecision(4) << values["fourth"] * 100  << "\n";
    cout << std::setprecision(4) << values["fifth"] * 100 << "\n";

    return 0;
}
