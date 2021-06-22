/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    int auxiliary; // Auxiliary variable
    int res; // Analysis result
    Ponto IE, SD, P;

    // The loop continues as long as the points are entered
    while (cin >> std::ws >> IE.x >> IE.y >>  SD.x >> SD.y >> P.x >> P.y) {

        // Check if the rectangle is valid
        if (IE.x == SD.x && IE.y == SD.y) {
            cout << "invalid" << std::endl;
            continue;
        }

        // Analyze which is the low point
        if(IE.x > SD.x && IE.y > SD.y) {
            auxiliary = IE.x;
            IE.x = SD.x;
            SD.x = auxiliary;

            auxiliary = IE.y;
            IE.y = SD.y;
            SD.y = auxiliary;
        }

        res = pt_in_rect( IE, SD, P );

        if (res == 0) {
            cout << "inside" << "\n";
        } else if(res == 1) {
            cout << "border" << "\n";
        } else {
            cout << "outside" << "\n";
        }

    }

    return 0;
}
