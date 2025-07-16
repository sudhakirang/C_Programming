// /***************string copy without the string copy function*****
//  * or
//  * 
//  * write an API for string copy without using string Library functions in single line using while loop?/

#include<stdio.h>
char *my_str_copy(char* dst,char *src)
{
    char *ptr = dst;
    while((*dst++) = (*src++));
    return ptr;
}
int main()
{
    char src[] = "Hi Handsome";
    char dst[100];
    my_str_copy(dst,src);
    printf("Copied string is %s\n",dst);
    return 0;
}