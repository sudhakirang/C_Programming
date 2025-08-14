/***WACP to find the lowest and highest ages in the given age array*****/
/***compile time declersation of an array*****/
#include <stdio.h>

int main() {
   // An array storing different ages 
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};   //even we can ask the user to enter array elements
  
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



/*******runtime decleration of an array********/
/***WACP to find the lowest and highest ages in the given age array*****/
#include <stdio.h>

int main() {
    int n;          //decides the length of the array from the user
    printf("enter how many ages you want to check:\n");
    scanf("%d",&n);
    int ages[n];  //which decides the memory for the ages array based on the user input
    int i;
    //ages input from the user
    printf("enter the ages:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ages[i]);
    }
    //output the ages entered by the user
    printf("entered ages are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",ages[i]);
    }
  
  // Create a 'lowest age' & 'highest age 'variables and assign the first array element of ages to it
  int lowestAge = ages[0];
  int highestAge = ages[0];

  // Loop through the elements of the ages array to find the lowest & highet age
  for (i = 0; i < n; i++) {
  
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
  printf("\nThe lowest age in the array is: %d\n", lowestAge);
  printf("The highest age in the array is: %d\n", highestAge);
   
  return 0;
}
