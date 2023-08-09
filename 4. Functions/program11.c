/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   Develop a void function or procedure length_units to display the 
   following menu on the screen:

    LENGTH UNITS
    1. Feet - Meters
    2. Meters - Feet
    3. Exit
    Option:

   Develop a program that uses the void function length_units to 
   display the corresponding menu and, according to the option selected 
   by the user, use the appropriate function, to calculate the equivalence 
   of the units of length.

   Remember that the data input and data validation must be done 
   in the main(), since the functions cannot perform the validation
   or data input tasks.

   Note: 1 ft = 0.3048
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

// Function to desplay the menu.
void length_units(void)
{
    printf("LENGTH UNITS\n");
    printf("1. Feet - Meters\n");
    printf("2. Meters - Feet\n");
    printf("3. Exit\n");
    printf("Option:\n");
    return;
}


// Main
int main()
{
    // Function menu.
    length_units();
    
    // Variables
    int option;
    float x, result;

    // User input.
    scanf("%i", &option);

    /* Evaluates the user input, computes accordingly with the use of functions
       and prints the result. */
    switch(option)
    {
        case 1:
        {
            scanf("%f", &x);
            result = feet_meters(x);
            printf("%.1f", result);
            break;
        }
        case 2:
        {
            scanf("%f", &x);
            result = meters_feet(x);
            printf("%.1f", result);
            break;
        }
        case 3:
        {
            printf("Exit");
            return 0;
            break;
        }
        default:printf("Error try again");
        break;
    }

    // Ends the program properly.
    return 0;
}


// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
1
451

Output:
LENGTH UNITS
1. Feet - Meters
2. Meters - Feet
3. Exit
Option:
137.5
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
1
1

Output:
LENGTH UNITS
1. Feet - Meters
2. Meters - Feet
3. Exit
Option:
0.3
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
2
10

Output:
LENGTH UNITS
1. Feet - Meters
2. Meters - Feet
3. Exit
Option:
32.8
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 4
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
2
1

Output:
LENGTH UNITS
1. Feet - Meters
2. Meters - Feet
3. Exit
Option:
3.3
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 5
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
2
451

Output:
LENGTH UNITS
1. Feet - Meters
2. Meters - Feet
3. Exit
Option:
1479.7
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 6
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
1
10

Output:
LENGTH UNITS
1. Feet - Meters
2. Meters - Feet
3. Exit
Option:
3.0
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 7
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
1
0

Output:
LENGTH UNITS
1. Feet - Meters
2. Meters - Feet
3. Exit
Option:
0.0
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 8
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
2
0

Output:
LENGTH UNITS
1. Feet - Meters
2. Meters - Feet
3. Exit
Option:
0.0
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */