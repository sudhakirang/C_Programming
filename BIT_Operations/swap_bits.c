#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%x", &num);
    int even_bits = num&0xAAAAAAAA;
    int odd_bits = num&0x55555555;
    even_bits = even_bits>>1;
    odd_bits = odd_bits<<1; 
    num = even_bits|odd_bits;
    printf("the number after bit swap is 0x%X\n",num);
    return 0;
}
