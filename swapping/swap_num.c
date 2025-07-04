#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    printf("numbers before swapping is a = %d and b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("numbers after swapping is a = %d and b = %d\n",a,b);
    return 0;
}