// #include<stdio.h>
// #define NUM_OF_BITS sizeof(int)*8
// #define MSB_SET_BIT 31
// void print_binary(int n){
//     int k = 0,i;
//     k = 1 << MSB_SET_BIT;       //Set the MSB bit
//     for(i=0; i<NUM_OF_BITS; i++ ){
//         if(n & (k>>i)!=0){
//             printf("1");
//         }
//         else{
//             printf("0");
//         }
//         //for the best representation of the binary numbers
//         if((i+1)%8 == 0)
//         {
//             printf(" ");
//         }
//     }
//     printf("\n");
// }
// int main()
// {
//     int num = 0;
//     printf("enter the number to represent it into binary\n");
//     scanf("%d",&num);
//     print_binary(num);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int n=10,i=0,binary[20];
    while(n>0)
    {
        binary[i] = n%2;
        n = n/2;
        i++;
    }
    for(int a = i-1; a>=0; a--)
    {
        printf("%d",binary[a]);
    }
    return 0;

}
