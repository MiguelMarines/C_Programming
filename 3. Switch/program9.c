/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   A particle moving in a circumference of radius "r" with constant 
   velocity "v" experiences a centripetal (or radial) acceleration, 
   "a" because the direction of "v" changes with time. The magnitude
   of "a" is given by:

   a = (v ^ 2) / r

   Develop a program that displays a menu and according 
   to the option selected by the user, requests the necessary data
   and calculates the corresponding result:
   
   Theme: Centripetal Acceleration
   a. Centripetal acceleration of a particle
   b. Velocityt of a particle
   c. Radius of the circumference in which a particle moves
   What do you want to calculate?
================================================================== */


// Libraries
#include <stdio.h>
#include <math.h>

// Main
int main()
{
  // Variables
  float a,r,v;
  char c;
	
  // Displays menu
  printf("Theme: Centripetal Acceleration\n");
  printf("a. Centripetal acceleration of a particle\n");
  printf("b. Velocityt of a particle\n");
  printf("Radius of the circumference in which a particle moves\n");
  printf("What do you want to calculate?\n");
  
  // User input.
	scanf("%c", &c);
 
 	// Evaluates the user input, computes accordingly and prints the result.
  switch(c)
  {
    case 'a':
      scanf("%f", &v);
      scanf("%f", &r);
      if(r == 0)
        printf("Invalida Operation");
      else
      {
        a = (v * v) / r;
        printf("%.1f", a);
      }
      break;

    case 'b':
      scanf("%f", &a);
      scanf("%f", &r);
      v = sqrt(a * r);
      printf("%.1f", v);
      break;

    case 'c':
      scanf("%f", &v);
      scanf("%f", &a);
      if(a == 0)
        printf("Invalida Operation");
      else
      {
        r = (v * v) / a;
        printf("%.1f",r);
      }
      break;
    default: printf("Invalida Operation");
  }
 	
 	// Ends the program properly.
 	return 0;
}


// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
a
5 3

Output:
Theme: Centripetal Acceleration
a. Centripetal acceleration of a particle
b. Velocityt of a particle
c. Radius of the circumference in which a particle moves
What do you want to calculate?
8.3
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
a
1 2

Output:
Theme: Centripetal Acceleration
a. Centripetal acceleration of a particle
b. Velocityt of a particle
c. Radius of the circumference in which a particle moves
What do you want to calculate?
0.5
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
a
5 0

Output:
Theme: Centripetal Acceleration
a. Centripetal acceleration of a particle
b. Velocityt of a particle
c. Radius of the circumference in which a particle moves
What do you want to calculate?
Invalid Operation
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 4
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
b
1 2

Output:
Theme: Centripetal Acceleration
a. Centripetal acceleration of a particle
b. Velocityt of a particle
c. Radius of the circumference in which a particle moves
What do you want to calculate?
1.4
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 5
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
c
1 2

Output:
Theme: Centripetal Acceleration
a. Centripetal acceleration of a particle
b. Velocityt of a particle
c. Radius of the circumference in which a particle moves
What do you want to calculate?
0.5
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 6
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
c
5 3

Output:
Theme: Centripetal Acceleration
a. Centripetal acceleration of a particle
b. Velocityt of a particle
c. Radius of the circumference in which a particle moves
What do you want to calculate?
8.3
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 7
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
c
5 0

Output:
Theme: Centripetal Acceleration
a. Centripetal acceleration of a particle
b. Velocityt of a particle
c. Radius of the circumference in which a particle moves
What do you want to calculate?
Invalid Operation
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 8
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
b
5 3

Output:
Theme: Centripetal Acceleration
a. Centripetal acceleration of a particle
b. Velocityt of a particle
c. Radius of the circumference in which a particle moves
What do you want to calculate?
3.9
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 9
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
b
5 0

Output:
Theme: Centripetal Acceleration
a. Centripetal acceleration of a particle
b. Velocityt of a particle
c. Radius of the circumference in which a particle moves
What do you want to calculate?
0.0
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */