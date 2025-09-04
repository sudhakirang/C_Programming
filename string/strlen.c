/**string length without the predefined function**/
#include <stdio.h>

int main()
{
    char str[20];
    int i,len=0;
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    printf("the length of the string is %d\n",len);
    return 0;
}
