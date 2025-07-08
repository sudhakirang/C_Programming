#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = NULL;
    int a, capacity = 1, len = 0;
    ptr = (int *)malloc(capacity*(sizeof(int)));
    if(ptr == NULL)
    {
        printf("DMA with initial capacity failed\n");
        return 1;
    }
    printf("enter the intergers and press -1 after the sequence entered:\n");
    while(1)
    {
        scanf("%d",&a);
        if(a==-1)
        {
            break;
        }
        if(len >= (capacity-1))
        {
            capacity *= 2;
            ptr = (int *)realloc(ptr,capacity*sizeof(int));
            if(ptr == NULL)
            {
                printf("DMA failed wiht new capacity\n");
                return 1;
            }
        }ptr[len++]=a;
    }
    ptr[len] = '\0';
    printf("the number of elements entered is: %d",len);
    printf("\nthe entered numbers are:\n");
    for(int i=0; i < len; i++)
    {
        printf("%d\t",ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}