/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

// libraries
#include <stdio.h>
#include <string.h>
#include "program.h"

// Constant
#define T 20

// Main
int main()
{
    // Varible
    char nombre[T];

    // Get names from file.
    fgets(nombre, T, stdin);
    nombre[strlen(nombre) - 1] = '\0';

    // Order names in alphabetical order.
    ordena_nombres(nombre);
    
    // Ends program properly.
    return 0;
}
