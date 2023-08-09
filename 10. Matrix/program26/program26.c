/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

// Library
#include <stdio.h>

// Constants
#define re 3
#define fi 3

// Function Menu
void menu()
{
    printf("MENU DE OPCIONES\n");
    printf("1. Inicializa matriz consecutiva.\n");
    printf("2. Inicializa matriz reversa.\n");
    printf("3. Inicializa matriz identidad.\n");
    printf("4. Imprime matriz.\n");
    printf("5. Cuenta positivos en la matriz.\n");
    printf("6. Suma primera diagonal.\n");
    printf("7. Suma diagonal inversa.\n");
    printf("8. Encuentra el mayor.\n");
    printf("9. Salir\n");
    printf("Opcion:\n");
}

// Function Print Matrix
void imprime_matriz(int mat[re][fi])
{
    int i, j;
    for(i = 0; i < re; i++)
    {
        for(j = 0; j < fi; j++)
        {
             printf("%i ", mat[i][j]);
        }
        printf("\n");
    }
}

// Function Start Matrix
void inicia_matriz(int mat[re][fi])
{
    int i, j, c = 1;
    for(i = 0; i < re; i++)
    {
        for(j = 0; j < fi; j++)
        {
             mat[i][j] = c;
             c++;
        }
    }
}

// Function Start Reverse Matrix
void inicia_matriz_reversa(int mat[re][fi])
{
    int i, j, a = 0;
    for(i = 0; i < re; i++)
    {
        for(j = 0; j < fi; j++)
        {
             mat[i][j] = (re * fi * 10 * - 1) + a;
             a = a + 10;
        }
    }
}

// Function Start Identity Matrix
void inicia_matriz_identidad(int mat[re][fi])
{
    int i, j;
    for(i = 0; i < re; i++)
    {
        for(j = 0; j < fi; j++)
        {
            if(i==j)
            {
                mat[i][j] = 1;
            }
            else
            {
                mat[i][j] = 0;
            }
        }
    }
}

// Function Count Positives
int cuenta_positivos(int mat[re][fi])
{
    int i, j, c = 0;
    for(i = 0; i < re; i++)
    {
        for(j = 0; j < fi; j++)
        {
            if(mat[i][j] > 0)
            {
                c++;
            }
        }
    }
    return c;
}

// Function Addition Diagonal
int suma_diagonal(int mat[re][fi])
{
    int i, j, a = 0;
    for(i = 0; i < re; i++)
    {
        for(j = 0; j < fi; j++)
        {
            if( (i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2) )
            {
                a = a + mat[i][j];
            }
        }
    }
    return a;
}

// Function Addtition Inverse Diagonal
int suma_diagonal_inversa(int mat[re][fi])
{
    int i, j, a = 0;
    for(i = 0; i < re; i++)
    {
        for(j = 0; j < fi; j++)
        {
            if( (i == 0 && j == 2) || (i == 1 && j == 1) || (i == 2 && j == 0) )
            {
                a = a + mat[i][j];
            }
        }
    }
    return a;
}

// Function Bigger
int mayor(int mat [re][fi])
{
    int i, j, l;
    int m = mat[0][0];
    for(i = 0; i < re; i++)
    {
        for(j = 0; j < fi; j++)
        {
            if(m > mat[i][j])
            {
                m = m;
            }
            else
            {
                m = mat[i][j];
            }
        }
    }
    return m;
}


// Main
int main()
{
    // Variables
    int d, r;
    int mat[re][fi];
    
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
                inicia_matriz(mat);
                break;
            }
            case 2:
            {
                inicia_matriz_reversa(mat);
                break;
            }
            case 3:
            {
                inicia_matriz_identidad(mat);
                break;
            }
            case 4:
            {
                imprime_matriz(mat);
                break;
            }
            case 5:
            {
                r = cuenta_positivos(mat);
                printf("%i\n", r);
                break;
            }
            case 6:
            {
                r = suma_diagonal(mat);
                printf("%i\n", r);
                break;
            }
            case 7:
            {
                r = suma_diagonal_inversa(mat);
                printf("%i \n", r);
                break;
            }
            case 8:
            {
                r = mayor(mat);
                printf("%i\n", r);
                break;
            }
            case 9:
            {
                return 0;
                break;
            }
        }
    }
    while(d != 9);

    // End program properly
    return 0;
}
