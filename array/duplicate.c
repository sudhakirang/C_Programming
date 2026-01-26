#include <stdio.h>

int main() {
    int n;
    int i, j, k;
    int isDuplicate;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nDuplicate elements and their positions:\n");
    int counted[10] = {0}; // Array to track already counted duplicates
    int duplicateCount = 0; //counting the duplicate elements
    for(i = 0; i < n; i++) {
        if(counted[i]) continue; // Skip already counted duplicates

        isDuplicate = 0;      //flag intializing for the duplicate element identification.

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




/** another program **/
#include<stdio.h>
int main(){
    int n;
    printf("enter how many elements in array a and b\n");
    scanf("%d",&n);
    int i,j,a[n];
    int count = 0;
    printf("enter the array A elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the duplicate elements are:\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i] == a[j]){
                printf("%d\t",a[i]);
                count++;
            }
        }
    }
    if(!count){
        printf("there are no common elements in the given array\n");
    }
    return 0;
}
