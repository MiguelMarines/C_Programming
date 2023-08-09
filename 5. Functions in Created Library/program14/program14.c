/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   In 199, NASA lost 125 million dollars due to conversion errors 
   between the metric system and the English metric system. 
   The conversion error crashed a probe on mars.

	Develop the function verify_measures, which receives a number 
	in meters and another in feet. They are both floats.

	The procedure should print on the screen if the measurements 
	are equivalent or not.
================================================================== */

// // Library
#include <stdio.h>

// Created Library
#include "program.h"

// Main
int main()
{
	// Variables
    float feet, meters;

    // User input
    scanf("%f %f%*c", &feet, &meters);

    // Function to verify measures.
    verify_measures(feet, meters);

    // Ends the program properly.
    return 0;
}


// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
164.042 50.000004

Output:
They are the same
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
20 50

Output:
They are not the same
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
5.322 2

Output:
They are not the same
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 4
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
1 0.3048

Output:
They are the same
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */