#include<stdio.h>
int main(){
  int num = 123;
  char str[5];
  sprintf(str, "%d", num);
  printf("the string is %s\n",str);
  return 0;
}
