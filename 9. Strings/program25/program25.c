/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

/* ========================================================================
 El programa fue creado para encriptar y desencriptar mensajes con una
 longitud de 100 caracteres. El prgrama cuenta con un encriptador sencillo
 y uno mucho mas complejo; se puede seleccionar que encriptador se quiere
 utilizar mediante la seleccion de una opcion cuando se despliega el menu.
 ======================================================================= */

// Libraries
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

// Function Menu
void menu()
{
    printf("\n1. Encriptador sencillo\n");
    printf("2. Encriptar otro mensaje\n");
    printf("3. Desencriptar mensaje\n");
    printf("4. Salir\n");
    printf("Opcion: ");
}

// Function Encriptar 1
void encriptar1(char mensaje[100])
{
    int i;
    for(i = 0; mensaje[i] != '\0'; i++)
    {
        mensaje[i] = mensaje[i] + 10;
    }
}

// Function Encriptar 2
void desencriptar1(char mensaje[100])
{
    int i;
    for(i = 0;mensaje[i] != '\0'; i++)
    {
        mensaje[i] = mensaje[i] - 10;
    }
    printf("\nMensaje Desencriptado: %s \n", mensaje);
}

// Function Encriptar
void encriptar(char mensaje[], int clave)
{
    int i;
    for(i = 0; mensaje[i] != '\0'; i++)
    {
        if(i % 2 == 0)
        {
            mensaje[i] = mensaje[i] + clave / 2;
        }
        else
        {
            mensaje[i] = mensaje[i] + clave * 5;
        }
    }
}
void desencriptar(char mensaje[],int clave)
{
    int i, j;
    for(j = 0; j < 5; j++)
    {
        for(i = 0; mensaje[i] != '\0'; i++)
        {
            if(i % 2 == 0)
            {
                mensaje[i] = mensaje[i] + clave / 2;
            }
            else
            {
                mensaje[i] = mensaje[i] + clave * 5;
            }
        }

        if(j == 4)
        {
            printf(" \nMensaje Desencriptado: %s \n", mensaje);
        }
    }
}


// Main
int main()
{
    // Variables
    int d;
    char mensaje[100];

    // User input
    printf("Escriba el mensaje a encriptar:  ");
    gets(mensaje);

    // Encrypt message
    encriptar(mensaje, 10);
    printf("\nMensaje Encriptado: %s \n", mensaje);
    
    // Cycle
    do
    {
        // Function Menu
        menu();
        // USer input
        scanf("%i%*c", &d);

        // Evaluates the user input and computes accordingly.
        switch(d)
        {
            case 1:
            {
                printf("\nEscriba el mensaje:  ");
                gets(mensaje);
                encriptar1(mensaje);
                printf("\nMensaje Encriptado: %s \n", mensaje);
                desencriptar1(mensaje);
                break;
            }
            case 2:
            {
                printf("\nEscriba el nuevo mensaje a encriptar:  ");
                gets(mensaje);
                encriptar(mensaje, 10);
                printf("\nMensaje Encriptado: %s \n\n", mensaje);
                break;
            }
            case 3:
            {
                desencriptar(mensaje, -2);
                break;
            }
            case 4:
            {
                return 0;
                break;
            }
            default:
            {
                printf("\nCometio un error intente de nuevo\n");
                break;
            }
        }
    }
    while(d != 4);

    // Ends program properly.
    return 0;
}
