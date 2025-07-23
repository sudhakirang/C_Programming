/*****Question: From the entered array which of the two elements sum meets the sum_target (lets say 35) print those values and indexes?*****/

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of elements in an array\n");
    scanf("%d",&n);
    int array[n];
    int i,j,sum_target;
    int size = sizeof(array)/sizeof(array[0]);  //calculate the size of the array dynamically
    printf("enter the array elemets\n");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("\nentered elements are:\n");
    for(i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    printf("\nenter the target element:\n");
    scanf("%d",&sum_target);
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){              //check with the next element without repeation
            if((array[i]+array[j]) == sum_target)
            {
                printf("the sum equals to 35 with %d, %d at indicies %d and %d\n",array[i],array[j],i,j);
            }
        }
    }
    return 0;
}
