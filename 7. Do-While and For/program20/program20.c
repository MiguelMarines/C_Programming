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
    int n;
    float r;
    char d, y;

    // Cycle
    do
    {
        // Function Menu
        menu();

        // User Input
        scanf("%c%*c", &d);

        // Evaluates the user input and computes accordingly.
        switch(d)
        {
            case 'a':
            {
                scanf("%i", &n);
                primo(n);
                break;
            }
            case 'b':
            {
                scanf("%i", &n);
                r = funciong(n);
                printf("%.1f\n", r);
                break;
            }
            case 's':
            {
                return 0;
                break;
            }
            default:
            {
                return 0;
                break;
            }
        } 
    }
    while(d! = 's');

    // Ends the program properly.
    return 0;
}
