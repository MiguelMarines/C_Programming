/* ===================================================================
   Author: Miguel Marines
   ================================================================ */

/* ===================================================================
   Problem:
   Determine the velocity (v) reached by a car in a distance (d)
   and a time (t). These last 2 variables are given by the user.

   Formula: v = d / t

   It is impossible to divide by 0 and the time cannot be negative.
   Validate both cases, for these cases the message "invalid operation"
   must be displayed.
==================================================================== */

// Libraries
#include <stdio.h>

int main()
{
	// Variables
	float d, t, v;

	// User inputs.
	scanf("%f", &d);
	scanf("%f", &t);

	// Validates that the time is not 0 or a negative number.
	// Computes and prints the result.
	if(t > 0)
	{
		v = d / t;
		printf("%.3f", v);
	}
	else
		printf("Invalid Operation");

	// Ends the program properly.
	return 0;
}


// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
10
2

Output:
5.000
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
0
2

Output:
0.000
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
10
0

Output:
invalid operation
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 4
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
25
-5

Output:
invalid operation
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 5
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
9
7

Output:
1.286
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */