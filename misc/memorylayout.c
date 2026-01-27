/***********to check the memory layout from a c program in your laptop***********/
/********NOTE: it shows the addresses only not ranges******/
#include <stdio.h>
#include<stdlib.h>
int global;

int main() {
    int local;
    static int stat;
    int *ptr = (int *)malloc(10*sizeof(int));
    if(ptr==NULL){
        printf("Heap allocation failed\n");
        return 1;
    }
    printf("Code (Code Segment)  : %p\n", main);
    printf("Global (Data Segment): %p\n", &global);
    printf("Static (Data Segment) : %p\n", &stat);
    printf("Stack (Stack Segment)  : %p\n", &local);
    printf("Heap (Heap Segment)  : %p\n", ptr);       //no need of '&' symbol since ptr points to heap only (if i use & again it points to the stack)
    free(ptr);
    return 0;
}

