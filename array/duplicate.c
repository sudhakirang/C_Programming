#include<stdio.h>
int main()
{
    int n=10,i,j,count=0;
    int a[ ]={1,2,3,4,5,5,4,3,2,1};
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-i-1;j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
        
    }
    printf("number of duplicate elements in the given array are %d\n",count);
    return 0;
}