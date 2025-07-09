#include<stdio.h>
int main()
{
  int num;
  printf("enter the number\n");
  scanf("%x",&num);
  if((num & (num-1)) == 0)
  {
    printf("the number is a power of 2\n");
  }
  else
  {
    printf("the number is not a power of two\n");
  }
  return 0;
}
