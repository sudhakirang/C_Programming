#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr = NULL;
    int n,i;
    printf("enter the n value\n");
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int));
    if(arr == NULL)
    {
        printf("DMA allocation failed\n");
        return 1;
    }
    printf("Enrter array elements: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    
    printf("\nentered array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
    }
    printf("\n");
    free(arr);
    return 0;
}