#include <stdio.h>
#include <math.h>

void menu(void)
{
    printf("FUNCIONES\n");
    printf("1. Potencia\n");
    printf("2. Evaluar sumatoria\n");
    printf("3. Aproximacion del valor de PI.\n");
    printf("4. Salir\n");
    printf("Opcion:\n");
    return;
}

float potencia(float x, float y)
{
    float a, c;
    c = 1;
    a = 1;
    if(y == 0)
    {
        a;
    }
    else
    {
        while(c <= y)
           {
              a = a * x;
              c = c + 1;
           }
    }
    return a;
}

float sumatoria(float n)
{
    int c, i;
    float s, r;
    s = 0;
    r = 0;
    c = 1;
    i = 1;
    
    while(c <= n)
    {
        r =s qrt((3.0 / 4.0) * (i)) / (sqrt(potencia(i, 5) + potencia(i, 2)) + 1);
        s = s + r;
        c++;
        i++;
    }
    return s;
}

float aproximacion_PI(float numero)
{
    float den = 1;
    float x = 0;
    float pi = 0;
    int o = 0;
    while(den <= numero)
        {
           if(den == 1 || x==4)
           {
              pi = pi + (4 / den);
              x = 2;
              den = den + 2 ;
           }
           else
           {
              pi = pi - (4/den);
              x=x + 2;
              den = den + 2 ;
           }
        }
    return pi;
}
