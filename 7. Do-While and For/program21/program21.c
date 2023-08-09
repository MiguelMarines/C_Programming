/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

/* ===================================================================
Programa con diferentes funciones matematicas como sumatoria, factorial,
 aproximacion de PI, tablas de multiplicar, numeros binarios, etc.
 ==================================================================== */

// Libraries
#include <stdio.h>

// Function Menu
void menu(void)
{
    printf("MENU\n");
    printf("1. Sumatoria de un numero\n");
    printf("2. Factorial de un numero\n");
    printf("3. Calcular PI\n");
    printf("4. Tablas de multiplicar\n");
    printf("5. Tabla de multiplicar de un numero\n");
    printf("6. Numeros binarios del 0 al 16\n");
    printf("7. Salir\n");
}

// Function Sumatoria
float sumatoria(float n)
{
    int c;
    float s = 0;

    for(c = 0; c <= n; c++)
    {
        s = s + c;
    }

    return s;
}

// Function Factorial
float factorial(float n)
{
    int c;
    float f = 1;

    for(c = 1; c <= n; c++)
    {
        f = f * c;
    }

    return f;
}

// Function PI
float PI(float n)
{
    float den, x = 0, pi = 0;
    int o = 0;

    for(den = 1; den <= n; den = den + 2)
    {
        if(den == 1 || x==4)
        {
           pi = pi + (4 / den);
           x = 2;
        }

        else
        {
           pi = pi - (4 / den);
           x = x + 2;
        }
    }

    return pi;
}


// Function Tablas de Multiplicar
void tablas_multiplicar(void)
{
    int i, j;
    
    for(i = 1; i <= 10; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            printf("%i*%i=%i \n", i, j, i * j);
        }
    }

    return;
}

// Function Tabla de Multiplicar
void tabla_multiplicar(int n)
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%i*%i=%i \n", n, i, n * i);
    }

    return;
}

// Function Binarios
void binarios(void)
{
    int i, j, k, l, m;

    for(i = 0; i <= 1; i++)
    {
        for(j = 0; j <= 1; j++)
        {
            for(k = 0; k <= 1; k++)
            {
                for(l = 0; l <= 1; l++)
                {
                    printf("%i %i %i %i \n", i, j, k, l);
                }
            }
        }
    }

    return;
}


// Main
int main()
{
    // Variables
    int a;
    float r, x;

    // Cycle
    do
    {
        // Menu function
        menu();

        // User input
        scanf("%i%*c", &a);

        // Evaluates the user input and computes accordingly.
        switch(a)
        {
            case 1:
            {
                printf("Ingrese el numero\n");
                scanf("%f", &x);
                r = sumatoria(x);
                printf("%.0f\n", r);
                break;
            }
            case 2:
            {
                printf("Ingrese el numero\n");
                scanf("%f", &x);
                r=factorial(x);
                printf("%.0f\n", r);
                break;
            }
            case 3:
            {
                printf("Ingrese lel limite de la serie a calcular\n");
                scanf("%f", &x);
                r = PI(x);
                printf("%f\n", r);
                break;            
            }
            case 4:
            {
                tablas_multiplicar();
                break;
            }
            case 5:
            {
                printf("De que numero desea la tabla de multiplicar ?\n");
                scanf("%f", &x);
                tabla_multiplicar(x);
                break;
            }
            case 6:
            {
                binarios();
                break;
            }
            case 7:
            {
                return 0;
                break;
            }
            default:
            {
                printf("Cometio un error intente de nuevo\n");
                return 0;
                break;
            }
        }
    }
    while(a != 7);

    // Ends the program properly.
    return 0;
}