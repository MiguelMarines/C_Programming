/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   Develop a program that prints the appropriate message for a 
   given temperature by the user. The messages to print will be:

   100 Degrees or more -> "Steam"
   30 Degrees or more, but less than 100 degrees -> "Hot"
   1 Degree or more, but less than 30 degrees -> "Cold"
   -273 Degrees or more, but less than 1 degree -> "Frozen"
   Less than - 273 -> "Nonexistent Temperature"
================================================================== */


// Libraries
#include <stdio.h>
int main()
{
	// Variable
	int t;

	// User input.
	scanf("%i",&t);
 
 	// Evaluates the user input and prints the message that corresponds.
	if(t >= 100)
      printf("Steam");
   else if(t >= 30 && t < 100)
      printf("Hot");
   else if(t >= 1 && t < 30)
      printf("Cold");
   else if(t >= -273 && t < 1)
      printf("Frozen");
   else if(t < -273)
      printf("Nonexistent Temperature");
 	
 	// Ends the program properly.
 	return 0;
}


// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
0

Output:
Frozen
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
120

Output:
Steam
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
10

Output:
Cold
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 4
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
-3

Output:
Frozen
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 5
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
-300

Output:
Nonexistent Temperature
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */