/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

/* ===================================================================
   Problem:
   Apply the while loop in at least two different ways, by different
   ways it refers to its structure and way of counting.

   Programa para un nadador y su entrenador que buscan calificar a las 
   Olimpiadas de Tokio 2020.
   
   El programa se usa para calcular las series de 100's y 200's y saber 
   si esta bien el paso de entrenamiento  o no del nadador.
   
   Ademas calcula los parciales que tiene que hacer un nadador para dar 
   un cierto tiempo.

   Tambien calcula cuantos segundos tiene que bajar el nadador de su 
   actual tiempo para califiacar.
==================================================================== */

// Libraries
#include <stdio.h>

// Main
int main()
{
    // Variables
    int d, can, c, des, prueba;
    float a, t, r, tiempo;

    // Menu
    printf("1. Serie de 100\n");
    printf("2. Serie de 200\n");
    printf("3. Calcular Parciales de una Prueba\n");
    printf("4. Sacar cuantos segundos tiene que bajar el nadador para ir a Tokio 2020\n");
    
    // User input
    scanf("%i", &d);

    /* Evaluates the user input, computes accordingly and prints the result. */
    switch(d)
    {
        case 1:
        {
            printf(" De cuantos 100's es la serie ? ");
            scanf("%i", &can);
            c = 1;
            a = 0;
            while(c <= can)
            {
                printf("\n Ingresa el tiempo en segundos, mayor a 45 segundos");
                printf("\n %i. 100 : ", c);
                scanf("%f", &t);
                if(t < 45)
                {
                    printf("El tiempo es invalido");
                    return 0;
                }
                else
                {
                    a = a + t;
                    c = c + 1;                    
                }
            }
            r = a / can;
            printf("\nEl promedio de la serie es %.2f segundos \n", r);
            if(r <= 60)
            {
                printf("Excelente Serie");
            }
            else if(r > 60 && r <= 70)
            {
                printf("Buena Serie");
            }
            else
            {
                printf("Mala Serie");
            }
            break;
        }
        case 2:
        {
            printf(" De cuantos 200's es la serie ? ");
            scanf("%i", &can);
            c = 1;
            a = 0;
            while(c <= can)
            {
                printf("\n Ingresa el tiempo en segundos, mayor a 90 segundos");
                printf("\n %i. 200 : ", c);
                scanf("%f", &t);
                if(t < 90)
                {
                    printf("El tiempo es invalido");
                    return 0;
                }
                else
                {
                    a = a + t;
                    c = c + 1;
                }
            }
            r = a / can;
            printf("\nEl promedio de la serie es %.2f segundos \n", r);
            if(r <= 135)
            {
                printf("Excelente Serie");
            }
            else if(r > 135 && r <= 150)
            {
                printf("Buena Serie");
            }
            else
            {
                printf("Mala Serie");
            }
            break;
        }
        case 3:
        {
            printf("1. Prueba 100\n");
            printf("2. Prueba 200\n");
            printf("3. Prueba 400\n");
            scanf("%i", &des);
            switch(des)
            {
                case 1:
                {
                    printf("Que tiempo quieres hacer? ");
                    scanf("%f", &t);
                    if(t < 45)
                    {
                        printf("Tiempo invalido");
                        return 0;
                    }
                    else
                    {
                        c = 1;
                        a =(t / 2)-1;
                        while(c <= 2)
                        {
                            printf("%i. Parcial = %.2f\n", c, a);                           
                            c = c + 1;
                            a = a + 2;
                        }
                    }
                    break;
                }
                case 2:
                {
                    printf("Que tiempo quieres hacer? ");
                    scanf("%f", &t);
                    if(t < 90)
                    {
                        printf("Tiempo invalido");
                        return 0;
                    }
                    else
                    {
                        c = 1;
                        a = (t / 4) - 3;
                        while(c <= 4)
                        {
                            printf("%i. Parcial = %.2f\n", c, a);                           
                            c = c + 1;
                            a = a + 2;
                        }
                    }
                    break;
                }
                case 3:
                {
                    printf("Que tiempo quieres hacer? ");
                    scanf("%f", &t);
                    if(t < 180)
                    {
                        printf("Tiempo invalido");
                        return 0;
                    }
                    else
                    {
                        c = 1;
                        a = (t / 8) - 7;
                        while(c <= 8)
                        {
                            printf("%i. Parcial = %.2f\n", c, a);                           
                            c = c + 1;
                            a = a + 2;
                        }
                    }
                    break;
                }    
                default:
                {
                    printf("Cometio un error intentelo denuevo");
                    break;
                }
            }
            break;
        }
        case 4:
        {
            printf("Que prueba desea?\n");
            printf("1. 100\n");
            printf("2. 200\n");
            scanf("%i", &prueba);
            switch(prueba)
            {
                case 1:
                {
                    printf("Ingresa el tiempo del nadador en el 100\n");
                    scanf("%f", &tiempo);
                    if(tiempo <= 49)
                    {
                        printf("El nadador con este tiempo ya esta calificadoa a Tokio 2020");
                    }
                    else
                    {
                        c = 0;
                        while(tiempo > 49)
                        {
                            tiempo = tiempo - 1;
                            c = c + 1;
                        }
                        printf("El nadador nesecita bajar %i segundos", c);
                    }
                    break;
                }
                case 2:
                {
                    printf("Ingresa el tiempo del nadador en el 200\n");
                    scanf("%f", &tiempo);
                    if(tiempo <= 106)
                    {
                        printf("El nadador con este tiempo ya esta calificadoa a Tokio 2020");
                    }
                    else
                    {
                        c = 0;
                        while(tiempo > 106)
                        {
                            tiempo = tiempo - 1;
                            c = c + 1;
                        }
                        printf("El nadador nesecita bajar %i segundos", c);
                    }
                    break;
                }
                default:
                {
                    printf("Cometio un error intentelo denuevo");
                    break;
                }
            }
        }
    }

    // Ends the program properly.
    return 0;
}