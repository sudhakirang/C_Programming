#include<stdio.h>
int main()
{
  int a = 0x12345678;
 a = (((a << 24)& 0xFF000000)|((a << 8)& 0x00FF0000)|((a >> 8)& 0x0000FF00)|((a >> 24)& 0x000000FF));
printf("a = %x\n",a);
return 0;
}
