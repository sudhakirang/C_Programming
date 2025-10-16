#include <stdio.h>

int main()
{
    int n,m;
    printf("enter number of array a elements:\n");
    scanf("%d",&n);
    printf("enter nuber of array b elements:\n");
    scanf("%d",&m);
    int a[n],b[m],i,j,count=0;
    printf("enter the array a elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the array b elements:\n");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    printf("the common elements in the given arrays are:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i] == b[j]){
                printf("%d\t",a[i]);
                count++;
                break;
            }
        }
    }
    if(!count){
        printf("there are no common elements in the given arrays\n");
    }
    return 0;
}
