/****Bit manipulations at particular Hardware Register ******/
/****NOTE: hardcoded hardware addresses will crash on a normal PC.
It only works on embedded hardware where that address is valid.******************/


#include<stdio.h>
#include<stdint.h>
#define ST_REG (*(volatile uint32_t*)0x80000000)
void set_bit(int pos){
    ST_REG |= (1u << pos);
    printf("value at 0x80000000 after set at pos %d is %x\n",pos,ST_REG);
}
void clear_bit(int pos){
    ST_REG &= ~(1u << pos);
    printf("value at 0x80000000 after clear at pos %d is %x\n",pos,ST_REG);
}
void toggle_bit(int pos){
    ST_REG ^= (1u << pos);
    printf("value at 0x80000000 after toggle at pos %d is %x\n",pos,ST_REG);
}
int main(){
    int pos;
    printf("enter the position at which bit manipulation required\n");
    scanf("%d",&pos);
    printf("value at 0x80000000 before bit manipulation is %x\n",ST_REG);
    set_bit(pos);
    clear_bit(pos);
    toggle_bit(pos);
    return 0;
}
