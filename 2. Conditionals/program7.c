/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   Develop a program that determines how much a store's customers 
   pay depending on whether they are preferential customers and 
   whether or not they want invoice.

   - If they want to invoice, they are charged 16% more.
   - If they are preferential customers, they receive a 10% discount.
   - If they are preferential customers and want to invoice,
     they are charged 16% more than the original amount and they are 
     also given a 10% discount from the original amount.
================================================================== */


// Libraries
#include <stdio.h>

// Main
int main()
{
	// Variables
  float purchase, discount, total_pay;
  int decision, customer_type;

	// User input.
	printf("Are you a preferential customer? (1.yes 2.no)  ");
  scanf("%i",&customer_type);
  printf("What is the amount of the purchase?  ");
  scanf("%f",&purchase);
  printf("Do you want to invoice? (1.yes  2.no)  ");
  scanf("%i",&decision);
 
 	// Evaluates the user input, computes accordingly and prints the result.
	if (customer_type == 1)
  {
    if (decision == 1)
    {
      discount = purchase * 0.10;
      total_pay = (purchase * 1.16) - discount;
      printf("Total to pay WITH discount and WITH taxes %.2f", total_pay);
    }

    else if (decision == 2)
    {
      discount = purchase * 0.10;
      total_pay = purchase - discount;
      printf("Total to pay WITH discount and WITHOUT taxes %.2f", total_pay);
    }

    else
    {
      printf("Invalid value please try again");
    }
  }
  else if (customer_type == 2)
  {
    if (decision == 1)
    {
      total_pay = purchase * 1.16;
      printf("Total to pay WITH taxes %.2f", total_pay);
    }
    else if (decision == 2)
    {
      total_pay = purchase;
      printf("Total to pay WITHOUT taxes %.2f", total_pay);
    }
    else
    {
      printf("Invalid value please try again");
    }
  }
  else
  {
    printf("Invalid value please try again");
  }
 	
 	// Ends the program properly.
 	return 0;
}


// Test 1
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
1
1000
2

Output:
Total to pay WITH discount and WITHOUT taxes 900.00
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 2
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
2
1000
1

Output:
Total to pay WITH taxes 1160.00
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


// Test 3
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Input:
2
1000
2

Output:
Total to pay WITHOUT taxes 1000.00
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */