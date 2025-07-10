// #include<stdio.h>
// int main()
// {
//     int num = 0xA5;
//     printf("the number before nibble reverse is %x\n",num);
//     num = (((num&0x0F)<<4)|((num&0xF0)>>4));
//     printf("the number after nibble reverse is %x\n",num);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int num1=0x12345678,num2=0,i;
    printf("the number value is %x\n",num1);
    for(i=0;i<sizeof(int)*8;i += 4)
    {
        num2 <<= 4;
        num2 |= num1>>i & 0x0F;
    }
    printf("the value after nibble operation is %x\n",num2);
    return 0;
}