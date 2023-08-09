/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

// Libraries
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function Menu
void menu()
{
    printf("menu \n");
    printf("1) primer_lugar \n");
    printf("2) ultimo_lugar \n");
    printf("3) mensaje_secreto \n");
    printf("4) salir \n");
}


// Function Last Place
void ultimo_lugar(char nombre[50])
{
    FILE * archivo = fopen(nombre, "r");
    
    char nombres[15][50];
    float calif[15];
    float menor = 100;
    int ind = 0, i = 0;

    while(!feof(archivo))
    {
        fscanf(archivo," %*s %s %*s %f", nombres[i], &calif[i]);
        if(menor > calif[i])
        {
            menor = calif[i];
            ind = i;
        }
    }
    
    fputs(nombres[ind], stdout);
    printf("\n");
    fclose(archivo);
}


// Function First Place
void primer_lugar(char nombre[50])
{
    FILE * archivo = fopen(nombre, "r");
    
    char nombres[15][50];
    float calif[15];
    float mayor = 0;
    int ind = 0, i = 0;

    while(!feof(archivo))
    {
        fscanf(archivo," %*s %s %*s %f", nombres[i], &calif[i]);
        if(mayor < calif[i])
        {
            mayor = calif[i];
            ind = i;
        }
        i++;
    }

    printf("%s\n", nombres[ind]);
    printf("\n");
    fclose(archivo);
}


// Function Secreat Message
void mensaje_secreto(char nom_arch[50])
{
    FILE * archivo = fopen(nom_arch, "r");
    
    char letra;
    
    if(archivo == NULL)
    {
        puts("El archivo no existe\n");
    }
    else
    {
        fscanf(archivo, "%c", &letra);
        while(!feof(archivo))
        {
            if (letra >= 'A' && letra < 'N')
            {
                letra = letra + 13;
                printf("%c", letra);
            }
            else if (letra >= 'N' && letra <= 'Z')
            {
                letra = letra - 13;
                printf("%c", letra);
            }
            else if (letra >= 'a' && letra < 'n')
            {
                letra = letra + 13;
                printf("%c", letra);
            }
            else if (letra >= 'n' && letra <= 'z')
            {
                letra = letra - 13;
                printf("%c", letra);
            }
            else
            {
                printf("%c", letra);
            }
            fscanf(archivo, "%c", &letra);            
        }
        printf("\n");
        
    }
}


// Main
int main()
{
    // Variable
    int opcion;

    // Cycle
    do
    {
        // Function Menu
        menu();
        scanf("%i%*c", &opcion);

        // Evaluates the user input and computes accordingly.
        switch(opcion)
        {
            case 1:
            {
                char nombre[50];
                fgets(nombre, 50, stdin);
                nombre[strlen(nombre) - 1] = '\0';
                primer_lugar(nombre);
                break;
            }
            case 2:
            {
                char nombre[50];
                fgets(nombre, 50, stdin);
                nombre[strlen(nombre) - 1] = '\0';
                ultimo_lugar(nombre);
                break;
            }
            case 3:
            {
                char nombre[50];
                fgets(nombre, 50, stdin);
                nombre[strlen(nombre) - 1] = '\0';
                mensaje_secreto(nombre);
                break;
            }
            case 4:
            {
                return 0;
                break;
            }
        }
    }
    while(opcion != 4);

    // Ends program properly.
    return 0;
}
