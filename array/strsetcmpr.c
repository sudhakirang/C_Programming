/*********character by cahracter comparison **************************/
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[] = "aabbceaccabcdaebbcc";
//     char sub[] = "abcd";
//     int flag=0,i,j;
//     int str_len = strlen(str);
//     int sub_len = strlen(sub);
//     for(i=0; i <str_len - sub_len;i++){
//         for(j=0;j<sub_len;j++){
//             if(str[i+j] != sub[j]){             //character by character comparison
//                 break;
//             }
//         }
//         if(j == sub_len){
//             printf("Sub string %s is found at %d\n",sub,i);
//             flag = 1;
//         }
//     }
//     if(!flag){
//         printf("Sub string %s is not found in the given string\n",sub);
//     }
//     return 0;
// }
/**************************set wise (len = sub string length) comparison***************************/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "aabbceaccabcdaebbcc";
    char sub[] = "abcd";
    int flag=0,i;
    int str_len = strlen(str);
    int sub_len = strlen(sub);
    for(i=0; i <str_len - sub_len;i++){
        if(strncmp(&str[i],sub,sub_len) == 0){             //chunk/set wise comparison 
            printf("Sub string %s is found at %d\n",sub,i);
            flag = 1;
        }
    }
    if(!flag){
        printf("Sub string %s is not found in the given string\n",sub);
    }
    return 0;
}
