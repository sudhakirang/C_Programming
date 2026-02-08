/****count how many repeated letters are there and find out the occurance of those letters*****/

#include <stdio.h>
#include <string.h>
int main() {
    char str[200],i,j;
    printf("enter the string\n");
    scanf("%[^\n]",str);
    for(i='a';i<='z';i++){
        int count=0;
        for(j=0;str[j]!='\0';j++){
            if (str[j] >= 'A' && str[j] <= 'Z'){
                        str[j] = str[j] + 32;   // convert to lowercase
                }
            if(i==str[j]){
                count++;
            }
        }
        if(count>=2){
            printf("%c is repeated %d times\n",i,count);
        }
        
    }
    return 0;
}
