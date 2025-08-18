#include <stdio.h>

void insert_element(int a[], int n) {
    int pos, insert_ele, i;
    printf("Enter the position where the new element has to be inserted [hint: position starts with zero index]:\n");
    scanf("%d", &pos);
    printf("Enter the new element to insert:\n");
    scanf("%d", &insert_ele);
    
    for(i = n; i >= pos; i--) {
        a[i+1] = a[i];  // Shift elements to the right
    }
    
    a[pos] = insert_ele;  // Insert the new element
    printf("Array elements after insertion of the new element:\n");
    for(i = 0; i < n + 1; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void del_ele(int a[], int n) {
    int del_pos, i;
    printf("Enter the position where an element has to be deleted [hint: index starts from 0]:\n");
    scanf("%d", &del_pos);

    for(i = del_pos; i < n - 1; i++) {
        a[i] = a[i + 1];  // Shift elements to the left
    }
    
    n=n-1;  // Decrease the size of the array
    printf("Array elements after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    int a[n];  // Dynamic array with size 'n'
    int i;

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("The entered elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    // Insert element and update n
    insert_element(a, n);
    n++;  // Increase the size after insertion

    // Delete element and update n
    del_ele(a, n);  // Now works with updated size

    return 0;
}
