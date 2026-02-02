#include<stdio.h>
int add(int a, int b){
  return a+b; 
}
int sub(int a, int b){
  return a-b; 
}
int main(){
  int a,b;
  printf("enter the value of a\n");
  scanf("%d",&a);
  printf("enter the value of b\n");
  scanf("%d",&b);
  int (*func_ptr)(int,int);        //func_ptr is a pointer to a function that takes 2 integer arguments and return an integer.
  func_ptr = &add;
  printf("the adddition of given two numbers is %d\n",add(a,b));
  func_ptr= &sub;
  printf("the subtraction of given two numbers is %d\n",sub(a,b));
  return 0;
}
