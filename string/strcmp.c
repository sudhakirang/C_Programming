#include <stdio.h>

int main()
{
    char str1[20],str2[25];
    int i,str1_len=0,str2_len=0;
    printf("Enter the string1:\n");
    scanf("%[^\n]",str1);
    printf("Enter the string2:\n");
    scanf(" %[^\n]",str2);
    for(i=0;str1[i]!='\0';i++){
        str1_len++;
    }
    printf("the length of the string1 is %d\n",str1_len);
    for(i=0;str2[i]!='\0';i++){
        str2_len++;
    }
    printf("the length of the string is %d\n",str2_len);
    int flag_compare = 0;
    if(str1_len != str2_len){
        flag_compare=1;
    }
    for(i=0;i<str1_len;i++){
        if(str1[i] != str2[i]){
            flag_compare++;
            break;
        }
    }
    if(flag_compare){
        printf("strings are not equal\n");
    }
    else{
        printf("strings are equal\n");
    }
    return 0;
}
