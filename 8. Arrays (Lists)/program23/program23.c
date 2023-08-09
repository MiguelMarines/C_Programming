/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

/* =============================================================================================================

Programa para definir el conjunto universo de 3 formaz diferentes para poder realizar operaciones con conjuntos.

1.Genera el conjunto Universo de forma aleatoria, 
  con un limite inferior y superiorintroducidos por el usuario.
  El numero de elementos del conjunto es definido por el usuario
  Ademas te da el valor promedio de los elementos.

2.Genera el conjunto Universo de forma de numeros continuos.
  Ademas te da el valor promedio de los elementos.
  El numero de elementos del conjunto es definido por el usuario
  
3.Genera el conjunto Universo de forma de captura por elementos introducidos por el usuario.
  Ademas te da el valor promedio de los elementos.
  El numero de elementos del conjunto es definido por el usuario
  
El punto 4 es para calcular los Puntos Fina de acuerdo al numero de competencias en las 
que se ha participado. Ademas saca el promedio de puntos obtenidos por competencia oficial.

============================================================================================================= */

//Se introducen las bibliotecas y librerias
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Funcion menu
void menu()
{
    printf("1. Universo Aleatorio y Calcular Valor Promedio de Elementos \n");
    printf("2. Universo de Numeros Continuos y Calcular Valor Promedio de Elementos\n");
    printf("3. Ingresar los valores del Universo y Calcular Valor Promedio de Elementos\n");
    printf("4. Promedio de Puntos FINA semestral por competencia oficial\n");
}


// Funcion Ualeatorio /// con 4 parametrso
void Ualeatorio(int n, int arg[n], int li, int ls)
{
    int elemento, i;
    srand(time(NULL));
    for(i = 0; i <= n; i++)
    {
        elemento = li + rand() % ((ls + 1) - li);
        arg[i] = elemento;
    }
}

// Funcion Ucontinuo /// con 2 parametros
void Ucontinuo(int n, int arg[n])
{
    int i;
    for(i = 0; i <= n; i++)
    {
        arg[i] = i;
    }
}

// Funcion Ucaptur /// con 2 parametros
void Ucaptura(int n, int arg[n])
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Ingrese elemento\n");
        scanf("%i", &arg[i]);
    }
}

// Funcion Uimprimi /// con 2 parametros
void Uimprimir(int n, int arg[n])
{
    int i;
    printf("Universo\n");
    for(i = 0; i < n; i++)
    {
        printf("%i ", arg[i]);
    }
}


// Funcion Uimprimi /// con 2 parametros
void UimprimirPuntos(int n, int arg[n])
{
    int i;
    printf("Puntos por competencia\n");
    for(i = 0;i < n; i++)
    {
        printf("%i ", arg[i]);
    }
}

// Funcion Epromedi /// con 2 parametros
float Epromedio(int n, int arg[n])
{
    float acum = 0.0;
    int i;
    for(i = 0; i < n; i++)
    {
        acum = acum + arg[i];
    }
    return acum / n;
}


// Main
int main()
{
    int n, d, li, ls;
    float p;
    
    // Function menu.
    menu();

    // User input.
    scanf("%i", &d);

    // Evaluates the user input and computes accordingly.
    switch(d)
    {
        case 1:
        {
            printf("De cuantos elementos desea el universo\n");
            scanf("%i", &n);
            printf("Ingresa el Limite Inferior del Universo\n");
            scanf("%i", &li);
            printf("Ingresa el Limite Superior del Universo\n");
            scanf("%i", &ls);
            
            int arg[n];
            
            Ualeatorio(n, arg, li, ls);
            Uimprimir(n, arg);
            p = Epromedio(n, arg);
            
            printf("\n Promedio del valor de los elementos = %.2f", p);
            break;
        }
        case 2:
        {
            printf("De cuantos elementos desea el universo\n");
            scanf("%i", &n);
            int arg[n];

            Ucontinuo(n, arg);
            Uimprimir(n, arg);
            p = Epromedio(n, arg);

            printf("\n Promedio del valor de los elementos = %.2f", p);
            break;
        }
        case 3:
        {
            printf("De cuantos elementos desea el universo\n");
            scanf("%i", &n);
            
            int arg[n];
            
            Ucaptura(n, arg);
            Uimprimir(n, arg);
            p = Epromedio(n, arg);

            printf("\n Promedio del valor de los elementos = %.2f", p);
            break;
        }
        case 4:
        {
            printf("En cuantas competencias oficiales participo ?\n");
            scanf("%i", &n);
            printf("Ingresa el Limite Inferior de Pruebas por Competencia\n");
            scanf("%i", &li);
            printf("Ingresa el Limite Superior del Pruebas por Competencia\n");
            scanf("%i", &ls);
            
            int arg[n];
            
            Ualeatorio(n, arg, li, ls);
            UimprimirPuntos(n, arg);
            p = Epromedio(n, arg);

            printf("\n Promedio de Puntos Fina  = %.2f", p);
            break;
        }
        default:
        {
            printf("Cometio un error porfavor intente de nuevo");
            return 0;
        }
    }
    // Ends program properly.
    return 0;
}