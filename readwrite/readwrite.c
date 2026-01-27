// #include<stdio.h>
// #define ADDRESS 0x40004000
// int main()
// {
//     int write_val = 0x5A5A5A5A;
//     int val_read;
//     volatile int *ptr = (int *)ADDRESS;
//     *ptr = write_val;
//     val_read = *ptr;
//     return 0;
// }
 
/*********or***********/
// #include<stdio.h>
// #define ADDRESS 0x40004000
// #define REG *((int *)ADDRESS)
// int main()
// {
//     int write_val = 0x5A5A5A5A;
//     int val_read;
//     REG = write_val;
//     val_read = REG;
//     return 0;
// }

/************or************/
#include<stdio.h>
#include<stdint.h>
#define REG (*(volatile uint32_t *)0x40004000)
int main()
{
    int write_val = 0x5A5A5A5A;
    int val_read;
    REG = write_val;
    val_read = REG;
    return 0;
}
