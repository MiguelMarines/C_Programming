/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   Programa para determinar si un nadador califica o no al nacional
   de natación en base a los tiempos tope y si está afiliado o no.
================================================================== */

#include <stdio.h>
#include "program.h"

int main()
{
    int d, a, c;
    float t;

    menu();
    
    scanf("%i",&d);
    
    switch(d)
    {
        case 1:
        {
            printf("El nadador esta afiliado?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%i", &a);
            afiliacion(a);
            printf("Ingrese el tiempo del nadador ");
            scanf("%f", &t);
            tiempo(d, t);
            printf("El nadador cumple con el tiempo y la afiliacion?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%i", &c);
            clasificacion(c);
            break;
        }
        case 2:
        {
            printf("El nadador esta afiliado?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%i", &a);
            afiliacion(a);
            printf("Ingrese el tiempo del nadador ");
            scanf("%f", &t);
            tiempo(d, t);
            printf("El nadador cumple con el tiempo y la afiliacion?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%i", &c);
            clasificacion(c);            
            break;
        }
        case 3:
        {
            printf("El nadador esta afiliado?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%i", &a);
            afiliacion(a);
            printf("Ingrese el tiempo del nadador ");
            scanf("%f", &t);             
            tiempo(d,t);
            printf("El nadador cumple con el tiempo y la afiliacion?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%i", &c);
            clasificacion(c);            
            break;
        }
        case 4:
        {
            printf("El nadador esta afiliado?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%i", &a);
            afiliacion(a);
            printf("Ingrese el tiempo del nadador ");
            scanf("%f", &t);            
            tiempo(d,t);
            printf("El nadador cumple con el tiempo y la afiliacion?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%i", &c);
            clasificacion(c);            
            break;
        }
        case 5:
        {
            printf("El nadador esta afiliado?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%i", &a);  
            afiliacion(a);
            printf("Ingrese el tiempo del nadador ");
            scanf("%f", &t);             
            tiempo(d, t);
            printf("El nadador cumple con el tiempo y la afiliacion?\n");
            printf("1. Si\n");
            printf("2. No\n");
            scanf("%i", &c);
            clasificacion(c);            
            break;
        }
        default:
        {
            printf("Estimado usuario cometio un erro porfavor intente de nuevo");
            return 0;
            break;
        }
    }
    
    return 0;
}
