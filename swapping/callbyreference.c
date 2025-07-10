#include<stdio.h>
void call_by_reference(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("the numbers after swapping are a = %d and b = %d", *a, *b);
}
void main()
{
    int a,b;
    printf("enter the values to swap\n");
    scanf("%d%d",&a,&b);
    printf("the values of variables before swapping are a = %d and b = %d\n",a,b);
    call_by_reference(&a,&b);
}