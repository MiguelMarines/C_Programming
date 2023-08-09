/* ===================================================================
   Author: Miguel Marines
   ================================================================ */
// Libraries
#include <stdio.h>
#include <string.h>

// Constant
#define MAX 50

// Function Menu
void menu()
{
    printf("MENU\n");
    printf("1. Numero de X.\n");
    printf("2. Numero de Y.\n");
    printf("3. Determinar el sexo.\n");
    printf("4. Cambiar a Mayusculas.\n");
    printf("5. Limipiar arreglo.\n");
    printf("6. Salir.\n");
    printf("Opcion:\n");
}

// Function Cromosomas X
int cromosomas_x(char arg[MAX])
{
    int c = 0;
    int i;
    for(i = 0; i < MAX ; i++)
    {
        if(arg[i] == 'X')
        c++;
    }
    return c;
}

// Function Cromosomas Y
int cromosomas_y(char arg[MAX])
{
    int c = 0;
    int i;
    for(i = 0;i < MAX; i++)
    {
        if(arg[i] == 'Y')
        c++;
    }
    return c;
}

// Function Determina Sexo
void determina_sexo(char arg[MAX])
{
    int i;
    int x = cromosomas_x(arg);
    int y = cromosomas_y(arg);
    int s = x + y;
    int m = strlen(arg);
    
    if(y >= 1)
    {
        printf("Masculino\n");
    }
    else if(m != s)
    {
        printf("Mutante\n");
    }    
    else
    {
        printf("Femenino\n");
    }
}

// Function Mayusculas
void mayusculas(char arg[MAX])
{
    int i = 0;
    int desp = 'a' - 'A';
    for(i = 0; arg[i] != '\0'; i++)
    {
        if(arg[i] >= 'a' && arg[i] <= 'z')
        {
            arg[i] = arg[i] - desp;
            printf("%c", arg[i]);
        }
        else
        {
            printf("%c", arg[i]);
        }
    }
    printf("\n");
}

// Function Eliminar Espacios
void elimina_espacios(char entrada[100], char salida[100])
{
    int i = 0, j = 0;
    
    while(entrada[i] != '\0')
    {
        if(entrada[i] != ' ')
        {
            salida[j] = entrada[i];
            printf("%c", salida[j]);
            j++;
        }
        i++;
    }
    printf("\n");
}


// Main
int main()
{
    // Variables
    int d, r;
    char arg[MAX];
    char empty[MAX];

    // Cycle
    do
    {
        // Menu function
        menu();
        
        // User input
        scanf("%i%*c", &d);

        // Evaluates the user input and computes accordingly.
        switch(d)
        {
            case 1:
            {
                fgets(arg, MAX, stdin);
                arg[strlen(arg) - 1] = '\0';
                r = cromosomas_x(arg);
                printf("%i \n", r);
                break;
            }
            case 2:
            {
                fgets(arg, MAX, stdin);
                arg[strlen(arg) - 1] = '\0';
                r = cromosomas_y(arg);
                printf("%i \n", r);
                break;
            }
            case 3:
            {
                fgets(arg, MAX, stdin);
                arg[strlen(arg) - 1] = '\0';
                determina_sexo(arg);
                break;
            }
            case 4:
            {
                fgets(arg, MAX, stdin);
                arg[strlen(arg) - 1] = '\0';
                mayusculas(arg);
                break;                
            }
            case 5:
            {
                fgets(arg, MAX, stdin);
                arg[strlen(arg) - 1]= '\0';
                elimina_espacios(arg, empty);
                break;
            }
            case 6:
            {
                return 0;
                break;
            }
        }
        
    }
    while(d != 6);

    // Ends program properly.
    return 0;
}