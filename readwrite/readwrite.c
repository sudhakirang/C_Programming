#include<stdio.h>
#define ADDRESS 0x40004000
int main()
{
    int write_val = 0x5A5A5A5A;
    int val_read;
    *((int *)ADDRESS) = write_val;
    val_read = *((int *)ADDRESS);
    return 0;
}