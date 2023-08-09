/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

// Function Menu
void menu(void)
{
    printf("MENU\n");
    printf("a. Numeros primos\n");
    printf("b. Funcion G\n");
    printf("s. Salir\n");
    printf("Opcion:\n");
    return;
}


// Function Primo
void primo(int n)
{
    int i, c;
    c = 0;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            c++;
        }
    }

    if(c > 2)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }

    return;
}



// Function FuncionG
float funciong(int n)
{
    int i;
    float s, a;

    s = 0;
    a = 0;

    for(i = 3; i <= n; i++)
    {
        a = (sqrt(i - 2)) / (pow(i, 2));
        s = s + a;
    }

    return s;
}