#include<stdio.h>
void ret_mul_val(int x, int y, int *sum, int *sub, int *mul){
    *sum = x + y;
    *sub = x - y;
    *mul = x*y;
}
int main(){
    int x,y;
    int sum, sub, mul;
    printf("enter the values of x and y\n");
    scanf("%d%d",&x,&y);
    ret_mul_val(x,y,&sum,&sub,&mul);
    printf("Sum = %d, Sub = %d, Mul = %d\n",sum,sub,mul);
    return 0;
}