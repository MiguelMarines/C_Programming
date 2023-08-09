/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   Implement the following functions:

    1. performance_fuel, which receives an amount in feet and another 
    in liters and returns the fuel performance in meters per liter.

    2. american_field, which receives the length and width of a field 
    in meters and returns an 'n' character if an american football field 
    would not fit in that field and 'y' if an american football field 
    would fit in that field.

    Note: An american football field is 360 feet long and 160 feet wide.
    Note: 1 foot = 0.3048 meters
================================================================== */

// Libraries
#include <stdio.h>

// Function to convert feet to meters.
float feet_meters(float feet)
{
    float meters = (feet * 0.3048);
    return meters;
}

// Functions to convert meters to feet.
float meters_feet(float meters)
{
    float feet = (meters / 0.3048);
    return feet;
}

float performance_fuel(float feet,float liters)
{
    float result = feet_meters(feet);
    result = result / liters;
    return result;
}

// Function to desplay the menu.
void menu(void)
{
    printf("MENU:\n");
    printf("1. Fuel performance.\n");
    printf("2. Fit of an american football field.\n");
    printf("Option:\n");
    return;
}

// Main
int main()
{
    // Variables
    int option;
    float p, l, performance, w, h, length, width;
    char decision;

    // Menu function
    menu();

    // User input
    scanf("%i", &option);

    /* Evaluates the user input, computes accordingly with the use of functions
       and prints the result. */
    switch(option)
    {
        case 1:
        {
            scanf("%f %f", &p, &l);
            performance = performance_fuel(p, l);
            printf("%.2f", performance);
            break;
        }
        case 2:
        {
            scanf("%f %f", &w, &h);
            length = meters_feet(h);
            width = meters_feet(w);
            if(length >= 360 && width >= 160)
            {
                decision = 'y';
                printf("%c", decision);
            }
            else
            {
                decision = 'n';
                printf("%c", decision);
            }
            break;
        }
        case 3: return 0;
        break;

        default: printf("Error");
        break;
    }

    // Ends the program properly.
    return 0;
}


// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
1
5 10

Output:
MENU:
1. Fuel performance.
2. Fit of an american football field.
Option:
0.15
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
1
10000 157

Output:
MENU:
1. Fuel performance.
2. Fit of an american football field.
Option:
19.41
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
2
70 120

Output:
MENU:
1. Fuel performance.
2. Fit of an american football field.
Option:
y
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 4
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
2
10 10

Output:
MENU:
1. Fuel performance.
2. Fit of an american football field.
Option:
n
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */