#include <stdio.h>
int second_largest_num(int a[], int n)
{
    int i,first=-1,second=-1;
    for(i=0;i<n;i++){
        if(a[i]>first){
           second = first;
           first = a[i];
        }else if(a[i]>second && a[i]!=first){
            second = a[i];
        }
    }
    return second;
}
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
    int second_largest;
    second_largest = second_largest_num(a,n);
    if(second_largest == -1){
        printf("\nthere is no second largest element in the entered array\n");
    }else{
        printf("\nthe second largest element in the entered array is %d\n",second_largest);
    }
    return 0;
}