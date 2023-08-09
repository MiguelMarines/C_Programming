// Library
#include <stdio.h>

// Function to verify measures.
void verify_measures(float feet,float meters)
{
  // Variables
  float equality = 0.3048;
  float result = equality * feet;

  // Print results.
  if(result == meters)
  {
    printf("They are the same.");
  }
  else
  {
    printf("They are not the same.");
  }
  return;
}