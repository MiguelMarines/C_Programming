/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   Evaluate the following function with a value given by the user.

   Function:

   f(x):

   2x^2 + 4x +2		x < -2
   2				 -2 ≤ x < 0
   3x + 1			   x ≥ 0
================================================================== */


// Libraries
#include <stdio.h>
int main()
{
	// Variable
	int x;

	// User input.
	scanf("%i", &x);
 
 	// Evaluates the user input, computes accordingly and prints the result.
	if(x < -2)
 	{
 		x = (2 * x * x) + (4 * x) + 2;
 		printf("%i", x);
 	}
 	else if(-2 <= x && x < 0)
 	{
 		x = 2;
 		printf("%i", x);
 	}
 	else if (x >= 0)
 	{
 		x = (3 * x) + 1;
 		printf("%i", x);
 	}
 	
 	// Ends the program properly.
 	return 0;
}


// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
12

Output:
37
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
0

Output:
1
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
-3

Output:
8
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 4
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
-1

Output:
2
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */