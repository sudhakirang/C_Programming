#include<stdio.h>
#include<string.h>
int main(){
    char i_str[20]; //to store the input 
    char o_str[10]; //to store the output
    int i,j=0;
    printf("enter the number series\n");
    scanf("%s",i_str);          //read the input as string
    int len = strlen(i_str);
    for(i=0;i<len;i+=3){
        o_str[j++] = i_str[i];  //take firt digit of each tripplet
    }
    o_str[j++] = '0';       //appending the first zero
    o_str[j++] = '0';       //appending the second zero
    o_str[j] = '\0';
    printf("the output string is %s\n",o_str);
    return 0;
}
