#include <stdio.h>

void menu(void)
{
    printf("1. Categoría 11-12\n");
    printf("2. Categoria 13-14\n");
    printf("3. Categoría 15-16\n");
    printf("4. Categoría 17-18\n");
    printf("5. Categoria Primera Fuerza\n");
    return;
}

void afiliacion(int a)
{

    if(a == 1)
    {
        printf("El nadador cumple con el requisito de la afiliacion \n\n");
    }
    else
    {
        printf("El nadador NO cumple con el requisito de la afiliacio \n\n");
    }
    return;
}

void tiempo(int d, float t)
{
    switch(d)
    {
        case 1:
        {
          if(t <= 31)
          {
              printf("El nadador cumple con el requisito del tiempo tope \n\n");
          }
          else
          {
              printf("El nadador NO cumple con el requisito del tiempo tope \n\n");
          }
          break;
        }
        case 2:
        {
          if(t <= 29)
          {
              printf("El nadador cumple con el requisito del tiempo tope \n\n");
          }
          else
          {
              printf("El nadador NO cumple con el requisito del tiempo tope \n\n");
          }
          break;
        }
        case 3:
        {
          if(t <= 27)
          {
              printf("El nadador cumple con el requisito del tiempo tope \n\n");
          }
          else
          {
              printf("El nadador NO cumple con el requisito del tiempo tope \n\n");
          }
          break;
        }
        case 4:
        {
          if(t <= 25)
          {
              printf("El nadador cumple con el requisito del tiempo tope \n\n");
          }
          else
          {
              printf("El nadador NO cumple con el requisito del tiempo tope \n\n");
          }
          break;
        }
        case 5:
        {
          if(t <= 23)
          {
              printf("El nadador cumple con el requisito del tiempo tope \n\n");
          }
          else
          {
              printf("El nadador NO cumple con el requisito del tiempo tope \n\n");
          }
          break;
        }
        default:
        {
            printf("Estimado usuario cometio un error porfavor intente de nuevo\n\n");
            break;
        }
    }
}

void clasificacion(int c)
{
    if(c == 1)
    {
        printf("El nadador esta clasificado al Nacional\n");
    }
    else
    {
        printf("El nadador No esta clasificado al Nacional\n");
        printf("Si el nadador no esta clasificado tiene un periodo de 15 dias previos al Nacional para cumplir con los requisitos faltantes");
    }
    return;
}
