/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

// Libraries
#include <stdio.h>
#include "program.h"

// Main
int main()
{
    // Variables
    int d, r, x, y;
    int a[10];

    // Cycle
    do
    {
        // Function menu
        menu();

        // User input
        scanf("%i%*c", &d);

        // Evaluates the user input and computes accordingly.
        switch(d)
        {
           case 1:
           {
                inicializa_arreglo(a);
                imprimir(a);
                break;
           }
           case 2:
           {
                captura_arreglo(a);
                imprimir(a);
                break;
           }
           case 3:
           {
                imprimir(a);
                break;
           }
           case 4:
           {
                captura_arreglo(a);
                r = cuenta_impares(a);
                printf("%i\n", r);
                break;
           }
           case 5:
           {
                captura_arreglo(a);
                scanf("%i", &x);
                scanf("%i", &y);
                sustituye_arreglo(a, x, y);
                imprimir(a);
                break;
           }
           case 6:
           {
                captura_arreglo(a);               
                invertir(a);
                imprimir(a);
                break;
           }
           case 7:
            {
                return 0;
                break;
            }
        }    
    }
    while(d != 7);

    // Ends program properly.
    return 0;
}