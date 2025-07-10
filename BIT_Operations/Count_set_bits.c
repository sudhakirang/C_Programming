#include<stdio.h>
int main()
{
  int num,i, bit_count=0;
  printf("enter the number\n");
  scanf("%x",&num);
  for(i=0;i<sizeof(int)*8;i++)
  {
      if(((num>>i)&1) == 1)
      {
        bit_count++;
      }
  }
  printf("the number of bits set in the given number is %d\n",bit_count);
  return 0;
}
