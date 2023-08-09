/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   Implements the following functions:

   Power Function: Receives 2 integers, x and n. The function returns 
   the result of raising x to n. Since the possibility of the result 
   being relatively large, it is convenient that the data type of the 
   function is float. If we were to use an int, we would surely overflow 
   its capacity.

   Summation Function: that evaluates the following.
   ((3/4)*i)^-2/(i^5 + 1^2)^-2 + 1


    There are different algorithms that allow us to obtain a close 
    approximation to the value of the PI constant, one of them is 
    the Gottfried Wilhem von Leibniz Algorithm.

    (N) = 4(1/1 - 1/3 + 1/5 - 1/7 + 1/9 - ... 1/N)

    PI Approximation Function: that receives the limit N of the series to 
    calculate the PI approximation.

    menu function
    1. Power
    2. Summation
    3. Evaluate Sum
    4. PI Approximation
    5. Exit
    Option:
================================================================== */


// Libraries
#include <stdio.h>
#include <math.h>
#include "program.h"

// Main
int main()
{
    // Variables
    int option;
    float x, n, r;

    // Prints menu.
    menu();
    
    // User input.
    scanf("%i", &option);

    /* Evaluates the user input, computes accordingly with the use of functions
       and prints the result. */
    switch(option)
    {
        case 1:
        {
            scanf("%f", &x);
            scanf("%f", &n);
            r = potencia(x, n);
            printf("%.0f", r);
            break;
        }
        case 2:
        {
            scanf("%f", &n);
            r = sumatoria(n);
            printf("%.1f", r);
            break;
        }
        case 3:
        {
            scanf("%f", &n);
            if(n == 0)
            {
                printf("No se puede usar 0");
            }
            else
            {
                r = aproximacion_PI(n);
                printf("%.3f", r);
                break;
            }
        }
        case 4:
        {
            return 0;
            break;
        }
    }

    // Ends the program properly.
    return 0;
}
