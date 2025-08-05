/*extract 7 bits from 6th position in a 32 bit number**/
#include <stdio.h>

int main()
{
    int num,mask=0,pos,mask_len,i;
    printf("enter the number [number will consider in the hexadecimal]:\n");
    scanf("%x",&num);
    printf("enter the position from which bit extraction required\n");
    scanf("%d",&pos);
    //checking the negative conditions
    if(num<0 || pos<0 || pos>32){
        printf("num and position is not valid\n");
    }
    printf("enter the length of the mask\n");
    scanf("%d",&mask_len);
    //create the mask for mask length of the bits
    for(i=0;i<mask_len;i++){
        mask |= (0x1<<i);       //mask = mask + (0x1<<i)
    }
    num = (num>>pos)&mask;
    printf("extracted number is %x\n",num);
    return 0;
}

