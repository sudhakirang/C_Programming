/*** pos value between 0 to 31*****/
#include<stdio.h>
int main()
{
  int a = 0x12345678;
  int pos;    //position info to clear a bit
  printf("enter the position where clear operation has to apply:\n");
  scanf("%d",&pos);
 a &=~(0x1<<pos) ;
printf("a = %x\n",a);
return 0;
}
