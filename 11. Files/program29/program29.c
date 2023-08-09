/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

/* =================================================================================================
   Programa que realiza diferentes tareas con archivos, como: escribir una carta, imprimir archivos,
   cambiar el formato de los textos en los archivos, contar caracteres indicados por el usuario en el
   archivo y registra una base de datos de pacientes medicos con un formato.
 ================================================================================================= */

// Libraries
#include <stdio.h>
#include <stdlib.h>

// Function Menu
void menu()
{
    printf("\nMENU\n");
    printf("1. Escribir Carta\n");
    printf("2. Imprimir Archivo\n");
    printf("3. Imprimir Archivo Cambiando Vocales por Numeros\n");
    printf("4. Contar cierto caracter en un archivo\n");
    printf("5. Registrar pacientes, con formato\n");
    printf("0. Salir\n");
}

// Function Write Letter
void escribir_carta()
{
    FILE * archivo = fopen("Carta.txt", "w");
    
    char remitente[50];
    printf("Escriba el nombre del remitente: ");
    gets(remitente);
    
    char receptor[50];
    printf("Escriba el nombre del receptor: ");
    gets(receptor);
    
    char oracion[500];
    printf("Escriba un parrafo:  \n");
    gets(oracion);
    
    fprintf(archivo, " \n\nPara: %s \n\n%s \n\nCon carino: %s\n", receptor, oracion, remitente);
    
    fclose(archivo);
}

// Function Print File
void imprimir_archivo(char nombre[15])
{
    printf("\n");
    printf("\n");
    
    FILE * archivo = fopen(nombre, "r");
    
    if(archivo == NULL)
    {
        printf("Archivo no encontrado \n");
    }
    else
    {
        char letra;
        while(!feof(archivo))
        {
            fscanf(archivo, "%c", &letra);
            printf("%c", letra);
        }
        fclose(archivo);
    }
    printf("\n");
}


// Function Change Vowels to Numbers
void vocales_numeros(char nombre[15])
{
    FILE * archivo = fopen(nombre, "r");
   
    if(archivo == NULL)
    {
        printf("Archivo no encontrado\n\n");
    }
    else
    {
        printf("\n\nMensaje con cambio de vocales por numeros: \n");
        
        char letra;
        
        while(!feof(archivo))
        {
            fscanf(archivo, "%c", &letra);
            if(letra == 'a')
            {
                printf("1");
            }
            else if(letra == 'e')
            {
                printf("2");
            }
            else if(letra == 'i')
            {
                printf("3");
            }
            else if(letra == 'o')
            {
                printf("4");
            }
            else if(letra == 'u')
            {
                printf("5");
            }
            else
            {
                printf("%c",letra);
            }
            
        }
        fclose(archivo);
    }
}


// FUnction Count Certain Character in File
int contar_caracter(char nombre[25])
{
    printf("Que caracter desea contar?\n");
    char c;
    scanf("%c", &c);
    
    int contador = 0;

    FILE * archivo = fopen(nombre, "r");
    
    if (archivo == NULL)
    {
        printf("ERROR: el archivo no existe.\n\n");
    }
    else
    {
        char letra;
        while(!feof(archivo))
        {
            fscanf(archivo, "%c", &letra);
            if(letra == c )
            {
                contador++;
            }
        }
        fclose(archivo);
    }
    return contador;
}


// Function Write Formatt
void escribir_formato()
{
    FILE * archivo = fopen("registro_pacientes.txt", "a");

    char nombre[50];
    char edad[50];

    float peso = 0;
    float altura = 0;
    
    printf("Cuantos pacientes quiere registrar: ");
    int pacientes = 0;
    scanf("%i %*c", &pacientes);
    
    int i  = 0 ;
    for(i =0 ; i < pacientes; i++)
    {
        printf("Ingrese el nombre del paciente: ");
        gets(nombre);
        
        printf("Ingrese la edad del paciente: ");
        gets(edad);
        
        printf("Ingrese el peso del paciente: ");
        scanf("%f%*c",&peso);
        
        printf("Ingrese la altura del paciente: ");
        scanf("%f%*c",&altura);

        if(i == pacientes)
        {
            fprintf(archivo, "Nombre: %s  Edad: %s  Peso: %.2f  Altura: %.2f", nombre, edad, peso, altura);
        }
        else
        {
            fprintf(archivo, "Nombre: %s  Edad: %s  Peso: %.2f  Altura: %.2f \n",nombre, edad, peso, altura);
        }
    }
    fclose(archivo);
}


// Main
int main()
{
    int opcion;

    // Cycle
    do
    {
        // Function Menu
        menu();
        
        // User input
        scanf("%i %*c", &opcion);

        // Evaluates the user input and computes accordingly.
        switch(opcion)
        {
            case 0:
            {
                return 0;
            }
            case 1:
            {
                escribir_carta();
                break;
            }
            case 2:
            {
                printf("Escriba el nombre del archivo con la terminacion .txt\n");
                char nombre[15];
                scanf("%s %*c", nombre);
                imprimir_archivo(nombre);
                break;
            }
            case 3:
            {
                printf("Escriba el nombre del archivo con la terminacion .txt\n");
                char nombre[15];
                scanf("%s %*c", nombre);
                vocales_numeros(nombre);
                break;
            }
            case 4:
            {
                printf("Escriba el nombre del archivo a contar caracteres con la terminacion .txt\n");
                char nombre[25];
                scanf("%s %*c", nombre);
                int r;
                r = contar_caracter(nombre);
                printf("El numero de veces que aparecio el caracter señalado es: %i\n",r);
                break;
            }
            case 5:
            {
                escribir_formato();
                break;
            }
            default:
            {
                printf("Error intente de nuevo\n");
                break;
            }
        }
    }
    while(opcion != 0);

    // Ends program properly.
    return 0;
}
