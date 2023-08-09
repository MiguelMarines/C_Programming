/* ==========================================================
   Author: Miguel Marines
   ======================================================== */

/* ==========================================================
   Problem:
   Calculate the volume of a right circular cone.
   The values given by the user are the radius and the height.
   The obtained result should be displayed on the screen.

   Formula: Vol = 1/3*pi*r^2*h
   Pi = 3.141592
   ======================================================== */

// Program to compute the volume of a right circular cone.

// Libraries 
#include <stdio.h>
#include <stdlib.h>

// Constant PI
const float PI = 3.141592;

int main()
{
  // Variables to store the values for the compute of the operations.
  float volumen;
  int radius, height;

  // Asks the user for the value of the radius and the height.
  scanf("%i", &radius);
  scanf("%i", &height);

  // Computes the volume.
  volumen = (PI * radius * radius * height) / 3;
    
  // Prints the result of the volume with 3 decimal numbers.
  printf("%.3f", volumen);

  // Ends the program properly.
  return 0;
}



// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
10
2

Output:
209.439
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
12
7

Output:
1055.575
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
9
5

Output:
424.115
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 4
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
6
5

Output:
188.496
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */