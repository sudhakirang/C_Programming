//if 3rd bit is not set then set the 8th bit else set the 11th bit
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number\n");
    scanf("%x",&num);
    if(((num>>2)&1) != 1)
    {
        num |= (1<<7);
    }
    else
    {
        num |= (1<<10);
    }
    printf("the number after the operation is %x\n",num);
    return 0;
}