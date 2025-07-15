#include<stdio.h>
int main()
{
  char a[20],temp;
  int i,len=0;
  printf("enter the string\n");
  scanf("%[^\n]",a);
  for(i=0;a[i]!='\0';i++)
    {
      len++;
    }
  printf("the length of the string is %d\n",len);
  for(i=0;i<len/2;i++)
    {
      temp = a[i];
      a[i] = a[len -i-1];
      a[len - i -1] = temp;
    }
  printf("the string after reverse is %s\n",a);
  return 0;
}
