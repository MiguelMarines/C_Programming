/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   Generate a classifier of at least 10 different categories,
   it must have at least 2 decision levels using switch.

   Program to calculate prices of construction to help give prices
   to clients.
================================================================== */


// Libraries
#include <stdio.h>

// Main
int main()
{
    // Variables and constants.
    char s;
    float negra = 800, gris = 900, completa = 1000, aplanado = 200, pintura = 100, piso = 100, plomeria = 70, electricidad = 50, carpinteria = 400, otro = 150;
    int f;
    float cotisacion,m;

    // Menu and user inputs.
    printf("Lista de servicios\n");
    printf("a. Construccion obra negra\n");
    printf("b. Construccion obra gris\n");
    printf("c. Construccion completa\n");
    printf("d. Aplanado\n");
    printf("e. Pintura\n");
    printf("f. Pegado de piso\n");
    printf("g. Plomeria\n");
    printf("h. Electricidad \n");
    printf("i. Carpinteria\n");
    printf("j. Otro tipo de reparacion\n");
    printf("Que servicio desea?\n");
    scanf("%c", &s);
    printf("Cuantos metros desea?\n");
    scanf("%f", &m);
    printf("Desea facturar? \n");
    printf("0. No\n");
    printf("1. Si\n");
    scanf("%i", &f);

    // Evaluates the user input, computes accordingly and prints the result.
    switch(s)
    {
        case'a': cotisacion = m * negra;
            switch(f)
            {
                case 0: cotisacion = cotisacion;
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                case 1: cotisacion = cotisacion + (cotisacion * 0.16);
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                default: printf("Cometio un error, comienze de nuevo");
                    break;
            }
            break;

        case'b': cotisacion = m * gris;
            switch(f)
            {
                case 0: cotisacion = cotisacion;
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                case 1: cotisacion = cotisacion + (cotisacion * 0.16);
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                default: printf("Cometio un error, comienze de nuevo");
                    break;
            }
            break;

        case'c': cotisacion = m * completa;
            switch(f)
            {
                case 0: cotisacion = cotisacion;
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                case 1: cotisacion = cotisacion + (cotisacion * 0.16);
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                default: printf("Cometio un error, comienze de nuevo");
                    break;
            }
            break;

        case 'd': cotisacion = m * aplanado;
            switch(f)
            {
                case 0: cotisacion = cotisacion;
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                case 1: cotisacion = cotisacion + (cotisacion *0.16);
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                default: printf("Cometio un error, comienze de nuevo");
                    break;
            }
            break;

        case 'e': cotisacion = m * pintura;
            switch(f)
            {
                case 0: cotisacion = cotisacion;
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                case 1: cotisacion = cotisacion + (cotisacion * 0.16);
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                default: printf("Cometio un error, comienze de nuevo");
                    break;
            }
            break;

        case 'f': cotisacion = m * piso;
            switch(f)
            {
                case 0: cotisacion = cotisacion;
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                case 1: cotisacion = cotisacion + (cotisacion * 0.16);
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                default: printf("Cometio un error, comienze de nuevo");
                    break;
            }
            break;

        case 'g': cotisacion = m * plomeria;
            switch(f)
            {
                case 0: cotisacion = cotisacion;
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                case 1: cotisacion = cotisacion + (cotisacion * 0.16);
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                default: printf("Cometio un error, comienze de nuevo");
                    break;
            }
            break;

        case 'h':cotisacion = m * electricidad;
            switch(f)
            {
                case 0:cotisacion = cotisacion;
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                case 1: cotisacion = cotisacion + (cotisacion * 0.16);
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                default: printf("Cometio un error, comienze de nuevo");
                    break;
            }
            break;

        case 'i': cotisacion = m * carpinteria;
            switch(f)
            {
                case 0: cotisacion = cotisacion;
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                case 1: cotisacion = cotisacion + (cotisacion * 0.16);
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                default: printf("Cometio un error, comienze de nuevo");
                    break;
            }
            break;

        case 'j': cotisacion = m * otro;
            switch(f)
            {
                case 0: cotisacion = cotisacion;
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                case 1: cotisacion = cotisacion + (cotisacion * 0.16);
                    printf("La cotisacion es $ %.2f ", cotisacion);
                    break;
                default: printf("Cometio un error, comienze de nuevo");
                    break;
            }
            break;

        default: printf("Cometio un error, comienze de nuevo");
            break;

    }

    // Ends the program properly.
    return 0;
}
