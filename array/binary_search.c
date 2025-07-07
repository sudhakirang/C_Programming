// in binary search first sort (bubble_sort algorithm is used here) and then search 
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    int a[n],i,j,temp;
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the enetered elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    //bubble sorting it took n*(n-1)/2 time complexity
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\n the ordered elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    int key,key_search = 0;
    printf("\nenter the serch element\n");
    scanf("%d",&key);
    //binary search algorithm
    int min = 0,max = n-1,mid;
    while(min <= max)
    {
        mid = (min + max)/2;
        if(key > a[mid])
        {
            min = mid + 1;
        }
        else if(key < a[mid])
        {
            max = mid - 1;
        }
        else
        {
            key_search++;
            break;
        }
    }
    if(!key_search)
    {
        printf("key is not found\n");
    }
    else
    {
        printf("key is found \n");
    }
    return 0;
}