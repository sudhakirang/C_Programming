/************simple program on the conditional compilation concept************/
#include <stdio.h>

// Uncomment the following line to enable debug mode since if comment debug message won't execute 
#define DEBUG

int main() {
    int a = 10, b = 20;
    int sum = a + b;

#ifdef DEBUG 
    printf("DEBUG: a = %d, b = %d\n", a, b);
#endif

    printf("Sum = %d\n", sum);

    return 0;
}