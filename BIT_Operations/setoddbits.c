#include<stdio.h>
int main()
{
  int num,i, bit_count=0;
  printf("enter the number\n");
  scanf("%x",&num);
  for(i=1;i<sizeof(int)*8;i += 2)
  {
      if(((num>>i)&1) != 1)
      {
        num |= (1<<i);
      }
  }
  printf("the number of after even bits set in the given number is %x\n",num);
  return 0;
}