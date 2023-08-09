/* ===================================================================
   Author: Miguel Marines
   ================================================================ */
/* =================================================================================================

PROGRAMA PARA UN EQUIPO DE BASKETBOL, EN EL QUE SE REGISTRA EL NOMBRE DE LOS JUGADORES
Y SE LES ASIGNA UN NUMERO. ADEMAS SE REGISTRA LAS ESTADISTICAS POR JUGADOR POR PARTIDO 
JUGADO EN CUANTO A CANASTAS Y SE SACA PROMEDIOS POR TIPO DE CANASTA Y EL TOTAL DE PUNTOS POR JUGADOR, 
ADEMAS EN CUALQUIER MOMENTO SE PUEDE IMRIMIR LA LISTA DE JUGADORES Y LAS ESTADISTICAS. 
TODAS ESTAS OPCIONES SE SELECCIONAN DESDE UN MENU. 
PARA QUE SE DESPLIEGUE EL MENU, PRIMERO SE DEBE DE REGISTRAR LOS NOMBRES DE LOS INTEGRANTES DEL EQUIPO 
Y SU NUMERO DE CANASTAS SEGUN SU TIPO.
 ================================================================================================= */

// Library
#include <stdio.h>

// Function Menu
void menu()
{
    printf("\nMENU\n");
    printf("1. Lista de jugadores.\n");
    printf("2. Lista de diferentes tipos de canastas poor jugador.\n");
    printf("3. Promedio de cada tipo de canasta por jugador.\n");
    printf("4. Canastas totales por jugador.\n");
    printf("5. Salir.\n");
    printf("Opcion: ");
}

// Function Print Matrtix
void imprime_matriz(int jugador[5][3])
{
    int i, j;
    for(i = 0; i < 5; i++)
    {
        printf("Jugador %i Coladas, Canastas 2 y 3pt: ", i + 1);
        for(j = 0; j < 3; j++)
        {
             printf("   %i   ", jugador[i][j]);
        }
        printf("\n");
    }
}

// Function Fill Names
void llenar_nombres(char nom[5][100])
{
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        printf("Ingrese el Nombre del Jugador No. %i: ", i + 1);
        scanf("%s", nom[i]);
    }
}

// Function Print Names
void imprime_nombres(char nom[5][100])
{
    int i = 0;
    printf("\n");
    for(i = 0; i < 5; i++)
    {
        printf("Jugador %i: %s \n", i + 1, nom[i]);
    }
}

// Function Fill Basket
void llenar_canastas(int jugador[5][3])
{
    int i, j;
    int val = 0;
    for(i = 0; i < 5; i++)
    {
        printf("Ingrese cantidad de Canastas Coladas, Canastas de 2 Puntos y Canastas de 3 Puntos, del jugador %i : \n",i+1);
        for(j = 0; j < 3; j++)
        {
            jugador[i][j] = val;
            val++;
            scanf("%i", &jugador[i][j]);
        }
    }
}

// Function Baskets Average
void promedio_canastas(int jugador[5][3])
{
    int i, j;
    int val;
    float acum;
    float promedioC, promedio2, promedio3;
    val = 0;
    acum = 0;
    for(i = 0; i < 5; i++)
    {
        acum = acum + jugador[i][0];
        val++;
    }
    promedioC = acum / val;
    printf("\nPromedio Canastas Coladas por jugador: %.2f\n", promedioC);
    val = 0;
    acum = 0;
    for(i = 0; i < 5; i++)
    {
        acum = acum + jugador[i][1];
        val++;
    }
    promedio2 = acum / val;
    printf("Promedio Canastas de 2 Puntos por jugador: %.2f\n", promedio2);
    val = 0;
    acum = 0;
    for(i = 0; i < 5; i++)
    {
        acum = acum + jugador[i][2];
        val++;
    }
    promedio3 = acum / val;
    printf("Promedio Canastas de 3 Puntos por jugador: %.2f\n", promedio3);
}

// Function Addtition Baskets
void suma_canastas(int jugador[5][3])
{
    int i, j, acum;
    acum = 0;
    for(i = 0; i < 3; i++)
    {
        acum = acum + jugador[0][i];
    }
    printf("Total canastas jugador 1: %i\n", acum);
    acum = 0;
    for(i = 0; i < 3; i++)
    {
        acum = acum + jugador[1][i];
    }
    printf("Total canastas jugador 2: %i\n", acum);
    acum = 0;
    for(i = 0; i < 3; i++)
    {
        acum = acum + jugador[2][i];
    }
    printf("Total canastas jugador 3: %i\n", acum);
        acum = 0;
    for(i = 0; i < 3; i++)
    {
        acum = acum + jugador[3][i];
    }
    printf("Total canastas jugador 4: %i\n", acum);
    acum = 0;
    for(i = 0; i < 3; i++)
    {
        acum = acum + jugador[4][i];
    }
    printf("Total canastas jugador 5: %i\n", acum);
}


// Function Main
int main()
{
    // Variables
    int opcion;
    int jugador[5][3];
    char nombres[5][100];

    // Functions to fill data
    llenar_nombres(nombres);
    llenar_canastas(jugador);
    
    // Cycle
    do
    {
        // Function Menu
        menu();

        // User input
        scanf("%i", &opcion);

        // Evaluates the user input and computes accordingly.
        switch(opcion)
        {
            case 1:
            {
                imprime_nombres(nombres);
                break;
            }
            case 2:
            {
                imprime_matriz(jugador);    
                break;
            }
            case 3:
            {
                promedio_canastas(jugador);
                break;
            }
            case 4:
            {
                suma_canastas(jugador);
                break;
            }
            case 5:
            {
                return 0;
                break;
            }
            default:
            {
                printf("cometio un error intente de nuevo");
                break;
            }
        }
    }
    while(opcion != 5);

    // End program properly.
    return 0;
}