#include<stdio.h>
void strtoint(const char *str){
    int i=0,result=0,sign=1,final_result=0;
    while(str[i] == ' ' || str[i] == '\t'){
        i++;
    }
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }else if(sign == '+')
        i++;
    while(str[i] >= '0' && str[i] <='9'){
        result = result *10 + (str[i] - '0');
        i++;
    }
    final_result = sign * result;
    printf("the integer is %d\n",final_result);
}
int main(){
    char str[] = "987654321";
    strtoint(str);
    return 0;
}
