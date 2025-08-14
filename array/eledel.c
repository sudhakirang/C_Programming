#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int pos,i;
    int size = sizeof(arr)/sizeof(arr[0]);          
    printf("enter the position where the element is deleted\n");
    scanf("%d",&pos);
    for(i=pos;i<size-1;i++){
          arr[i] = arr[i+1];            //left shift by one position
    }
    for(i=0;i<size-1;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
