#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    int root;
    root = sqrt(num);
    if((root*root)==num){
        printf("perfecrt square\n");
    }
    else{
        printf("not a perfect square\n");
    }
    return 0;
}
