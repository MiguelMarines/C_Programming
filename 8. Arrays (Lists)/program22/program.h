/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

// Library
#include <stdio.h>

// Function menu
void menu(void)
{
    printf("\nMENU DE OPCIONES\n");
    printf("1. Inicializa arreglo\n");
    printf("2. Captura arreglo\n");
    printf("3. Imprime arreglo\n");
    printf("4. Elementos impares en el arreglo\n");
    printf("5. Sustituye arreglo\n");
    printf("6. Invierte arreglo\n");
    printf("7. Salir\n");
    printf("Opcion: \n");
}

// Function initialize array.
void inicializa_arreglo(int a[10])
{
    int i;
    for(i = 0; i < 10; i++)
    {
        a[i] = 0;
    }
}

// Function get values for the array.
void captura_arreglo(int a[10])
{
    int i;

    for(i = 0; i < 10; i++)
    {
        scanf("%i", &a[i]);
    }
}


// Function to print arrays.
void imprimir(int a[10])
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("%i ", a[i]);
    }
}

// Function to count odd numbers in an array.
int cuenta_impares(int a[10])
{
    int i;
    int k = 0;

    for(i = 0; i < 10; i++)
    {
        if(a[i] % 2 != 0)
        {
            k = k + 1;
        }
    }

    return k;
}

// Function to replace the values of arrays.
void sustituye_arreglo(int a[10], int x, int y)
{
    int i;

    for(i = 0; i < 10; i++)
    {
        if(a[i] == x)
        {
            a[i] = y;
        }
    }
}

// Function to reverse arrays.
void invertir(int a[10])
{
    int i = 0;
    int j = 9;
    int valor = 0;

    for(i = 0; i < 10 / 2; i++)
    {
        valor = a[i];
        a[i] = a[j];
        a[j] = valor;
        j--;
    }
}