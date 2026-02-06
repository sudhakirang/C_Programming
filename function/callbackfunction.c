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


