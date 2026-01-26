#include<stdio.h>
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    int reverse_num=0;
    for(int i = 0; i<32;i++){
        reverse_num = reverse_num<<1 | num&1;      //num&1 can give a right most bit 
        num = num>>1;
    }
    printf("number after bit reverse is %d\n",reverse_num);
    return 0;
}
