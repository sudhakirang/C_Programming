#include <stdio.h>

int main() {
    int arr[100], n;
    int i, j, k;
    int isDuplicate;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements and their positions:\n");

    int counted[100] = {0}; // Array to track already counted duplicates
    int duplicateCount = 0;

    for(i = 0; i < n; i++) {
        if(counted[i]) continue; // Skip already counted duplicates

        isDuplicate = 0;

        // Find duplicates
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                if(!isDuplicate) {
                    printf("Element %d found at positions: %d", arr[i], i);
                    isDuplicate = 1;
                    duplicateCount++;
                }
                printf(", %d", j);
                counted[j] = 1; // Mark as counted
            }
        }

        if(isDuplicate) {
            printf("\n");
            counted[i] = 1;
        }
    }

    printf("\nTotal number of distinct duplicate elements: %d\n", duplicateCount);

    return 0;
}