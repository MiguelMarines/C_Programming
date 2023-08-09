/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

// Libraries
#include <stdio.h>
#include <math.h>
#include "program.h"

// Main
int main()
{
	// Variables
    int d;
    float x, n, r;

    // Menu function
    menu();

    // Uer input
    scanf("%i", &d);

    // Evaluates the user input, computes accordingly and prints the result.
    switch(d)
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
