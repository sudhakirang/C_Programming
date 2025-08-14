/***WACP to find the lowest and highest ages in the given age array*****/
#include <stdio.h>

int main() {
   // An array storing different ages
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
  
  int i;
  
  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages[0]);
  
  // Create a 'lowest age' & 'highest age 'variables and assign the first array element of ages to it
  int lowestAge = ages[0];
  int highestAge = ages[0];

  // Loop through the elements of the ages array to find the lowest & highet age
  for (i = 0; i < length; i++) {
  
    // Check if the current age is smaller than current the 'lowest age'
    if (lowestAge > ages[i]) {
    
      // If the smaller age is found, update 'lowest age' with that element
      lowestAge = ages[i];
    }
    // Check if the current age is lesser than current the 'higest age'
    if (highestAge < ages[i])
    {
       // If the higher age is found, update 'highest age' with that element
    	highestAge = ages[i];
    }
  }
 
  // Output the value of the lowest & highest age
  printf("The lowest age in the array is: %d\n", lowestAge);
  printf("The highest age in the array is: %d\n", highestAge);
   
  return 0;
}
