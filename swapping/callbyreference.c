#include<stdio.h>
void call_by_reference(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("the numbers after swapping are a = %d and b = %d", *a, *b);
}
int main()
{
    int x,y;
    
    return 0;
}