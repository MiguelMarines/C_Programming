/* ==========================================================
   Author: Miguel Marines
   ======================================================== */

/* ==========================================================
   Problem:
   Calculate the profit of an investment with simple interest
   and get the total profit plus the amount invested.

   Formula:
   Profit = (Amount Invested * Percentage) / 100
   Total Amount = Amount Invested + Profit
=========================================================== */

// Libraries
#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Variables
  char currency;
  float amount, percentage, years, profit, total;
    
  // User inputs.
  scanf("%c", &currency);
  scanf("%f", &amount);
  scanf("%f", &percentage);
  scanf("%f", &years);

  // Computes the profit.
  profit = (amount * percentage) / 100;
  profit = profit * years;
    
  // Prints the profit.
  printf("%c %.2f", currency, profit);

  // Prints the total.
  total = profit + amount;
  printf("\n%c %.2f", currency, total);

  // Ends the program properly.
  return 0;
}


// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
$
100
10
5

Output:
$ 50
$ 150
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
$
290
5
2

Output:
$ 29
$ 319
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
$
350
7
1.5

Output:
$ 36.75
$ 386.75
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */