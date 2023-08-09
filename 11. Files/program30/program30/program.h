/* ===================================================================
   Author: Miguel Marines
   ================================================================ */


// Libraries
#include <stdio.h>
#include <string.h>

// Constant
#define T 20

// Function arange names alphabetically.
int ordena_nombres(char nombre[T])
{
    int i, j, k = 0;
    char nombres[T][T], ordenados[T];
    
    FILE * archivo = fopen(nombre, "r");
    
    if(archivo == NULL)
    {
        printf("Archivo no encontrado\n");
        return 0;
    }
    
    while (!feof(archivo))
    {
        fscanf(archivo, "%*s %s %*s %*f", nombres[k]);
        k++;
    }
    
    for(i = 0; i < k; i++)
    {
        for(j = 0; j < k; j++)
        {
            if(nombres[j][0] > nombres[j+1][0] && j+1 < k)
            {
                strcpy(ordenados, nombres[j]);
                strcpy(nombres[j], nombres[j+1]);
                strcpy(nombres[j+1], ordenados);
            }
            if (nombres[j][0] == nombres[j+1][0] && j+1 < k)
            {
                if (nombres[j][1] > nombres[j+1][1] && j+1 < k)
                {
                    strcpy(ordenados, nombres[j]);
                    strcpy(nombres[j], nombres[j+1]);
                    strcpy(nombres[j+1], ordenados);
                }
            }
            
        }
        
    }

    // Prints names.
    for (i = 0; i < k; i++)
    {
        printf("%s\n", nombres[i]);
    }
    fclose(archivo);

    // Prints program properly.
    return 0;
}
