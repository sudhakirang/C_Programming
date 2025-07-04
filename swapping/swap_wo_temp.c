#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    printf("numbers before swap are a = %d and b = %d\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("numbers after swap are a = %d and b = %d\n",a,b);
    return 0;
}