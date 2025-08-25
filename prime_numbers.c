#include<stdio.h>
#include<math.h>
int main(){
    int num,count=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num<2){
        count = 1;
        printf("number is less than 2 so\n");
    }
    int sqrt_num = (int)sqrt(num);
    for(int i=2; i<=sqrt_num;i++){
        if(num%i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        printf("number is a prime number\n");
    }
    else{
        printf("number is not a prime number\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num<2){
        count = 1;
        printf("number is less than 2 so\n");
    }
    for(int i=2; i<=num/2;i++){
        if(num%i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        printf("number is a prime number\n");
    }
    else{
        printf("number is not a prime number\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int num;
    printf("enter the number upto which the prime numbers are required\n");
    scanf("%d",&num);
    int i,j,count=0,count_primes=0;
    for(i=2;i<=num;i++){
        count = 0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count == 0){
            printf("%d\t",i);
            count_primes++;
        }
    }
    printf("\nnumber of prime numbers below %d are %d\n",num,count_primes);
    return 0;
}
#include<stdio.h>
int main(){
    int num;
    printf("enter the number upto which the prime numbers are required\n");
    scanf("%d",&num);
    int i,j,count=0,prime_flag=0;
    for(i=2;prime_flag<num;i++){
        count = 0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count == 0){
            printf("%d\t",i);
            prime_flag++;
        }
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number range upto which the prime numbers are required\n");
    scanf("%d%d",&n,&m);
    int i,j,count=0,prime_flag=0;
    for(i=n;i<=m;i++){
        count = 0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count == 0){
            printf("%d\t",i);
            prime_flag++;
        }
    }
    return 0;
}
