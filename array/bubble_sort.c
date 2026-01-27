#include <stdio.h>

int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    int a[n],i,j,temp;
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the entered array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n-1;i++)            //n-1 passes
    {
        int swapped = 0;            //to check if already sorted or not
        for(j=0;j<n-i-1;j++)        //n-i-1 comparisons
        {
            if(a[j]>a[j+1])        //ascending order
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = 1;
            }
        }
        if(!swapped){                //ealry exit if already sorted
            printf("already sorted\n");
            break;
        }
    }
    printf("\nthe ordered array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
