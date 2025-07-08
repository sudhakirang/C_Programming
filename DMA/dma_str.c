#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str = NULL;
    char ch;
    int capacity=1,size=0;
    str = (char *)malloc(capacity*(sizeof(char)));
    if(str == NULL)
    {
        printf("DMA with initial capacity failed\n");
        return 1;
    }
    printf("enter the string and press enter to finish:\n");
    while((ch = getchar())!='\n' && ch != EOF)
    {
        if(size >= (capacity-1))
        {
            capacity *= 2;
            str = (char *)realloc(str,capacity*sizeof(char));
            if(str == NULL)
            {
                printf("DMA failed wiht new capacity\n");
                return 1;
            }
        }str[size++]=ch;
    }
    str[size] = '\0';
    printf("the entered string is: %s",str);
    free(str);
    return 0;
}