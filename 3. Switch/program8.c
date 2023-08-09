/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   There are several scales to measure earthquakes, the Richter scale 
   represents the seismic energy released in each earthquake and is 
   based on the seismographic record.

   Use the control switch statement to develop a program that given 
   the magnitude on the Richter scale of an earthquake, displays 
   the effects it causes, based on the following table:

   Magnitude on the Richter scale earthquake effects:

    3, 4 -> "Generally it is not felt, but it is registered."
    5 -> "Often felt, but only causes minor damages."
    6 -> "Light damages to buildings."
    7 -> "It can cause severe damages in highly populated areas."
    8, 9 -> "Major earthquake. Causes heavy damages."
    10 -> "Great earthquake. Total destruction in nearby communities."
================================================================== */


// Libraries
#include <stdio.h>

// Main
int main()
{
  // Variables
  int magnitud;
	
  // User input.
	scanf("%i", &magnitud);
 
 	// Evaluates the user input, computes accordingly and prints the result.
  switch(magnitud)
  {
    case 3: case 4: printf("Generally it is not felt, but it is registered.");
    break;
    case 5: printf("Often felt, but only causes minor damages.");
    break;
    case 6: printf("Light damages to buildings.");
    break;
    case 7:printf("It can cause severe damages in highly populated areas.");
    break;
    case 8: case 9: printf("Major earthquake. Causes heavy damages.");
    break;
    case 10: printf("Great earthquake. Total destruction in nearby communities.");
    break;
    default: printf("Scale does not exist.");
    break;
  }
 	
 	// Ends the program properly.
 	return 0;
}


// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
1

Output:
Scale does not exist.
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
7

Output:
It can cause severe damages in highly populated areas.
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
10

Output:
Great earthquake. Total destruction in nearby communities.
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */