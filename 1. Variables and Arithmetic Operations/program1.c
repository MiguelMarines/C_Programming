/* ==========================================================
   Author: Miguel Marines
   ======================================================== */


/* ==========================================================
   Problem:
   Ask the user for 3 integer values and compute the 
   following arithmetic operations. 

   A / B
   A % B
   A / B - C
   A / (B - C)
   
   The result of each computation should be displayed 
   on the screen (3 decimal digits).
   
   Save the result of each computation in an auxiliary variable 
   before displaying the result of each operation.
=========================================================== */


// Libraries
#include <stdio.h>

int main()
{
  // Variables
  int a, b, c;
    
  // Asks the user for three integer values.
  puts("Enter 3 integer values:");
  scanf("%i", &a);
  scanf("%i", &b);
  scanf("%i", &c);
    
  // Auxiliar variable that helps with the operations.
  float aux;
    
  /* Performs the computations and prints the results
  with 3 decimals and 0 decimals in the 2nd one.*/
  aux = (float)a / (float)b;
  printf("%.3f \n", aux);
    
  aux = a % b;
  printf("%.0f \n", aux);
    
  aux = (float)a / (float)b - (float)c;
  printf("%.3f \n", aux);
    
  aux = (float)a / ((float)b - (float)c);
  printf("%.3f \n", aux);

  // Ends the program properly.
  return 0;
}



// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
10
5
2

Output:
2.000
0
0.000
3.333
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
5
12
3

Output:
0.417
5
-2.583
0.556
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
9
6
4

Output:
1.500
3
-2.500
4.500
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */