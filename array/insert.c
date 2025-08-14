#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,pos,ele;
    printf("enter the position where the element has insert\n");
    scanf("%d",&pos);
    printf("enter the element to insert\n");
    scanf("%d",&ele);
    for(i=size-1;i>=pos;i--){
        arr[i+1] = arr[i];          //right shift by one element
    }
    printf("the array after right shift:\n");
    for(i=0;i<size+1;i++)
    {
        printf("%d\t",arr[i]);
    }
    arr[pos] = ele;             //inserting new element at the required position
    printf("\nthe array after element insertion:\n");
    for(i=0;i<size+1;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
