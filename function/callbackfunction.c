/***CALL BACK FUNCTION simple program
Defination: A function that pass as an argument in another function and call/invoke in that function is called as call back function********/
#include<stdio.h>
void print_hello(void){
  printf("Hello world\n");
}
void execute_call_back_function(void (*callback)()){
  printf("executing the call back function\n");
  callback();
}
void main(){
  execute_call_back_function(print_hello);
}

Application on call back function (where function pointer also included):
#include<stdio.h>
int addition(int c, int d){
  return c+d;
}
int multiply(int a,int b){
    return a*b;
}
int execute_call_back_func(int a,int b, int(*callback)(int , int )){
  a=a^b;
  b=a^b;
  a=a^b;
  return callback(a,b);
}
int main(){
  int e=10,f=5,sum=0,mul=0;
  sum = execute_call_back_func(e,f,addition);
  printf("the answer after the swap and  addition is %d\n",sum);
  mul = execute_call_back_func(e,f,multiply);
  printf("the answer after the swap and  multiplication is %d\n",mul);
  return 0;
}
