#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    printf("Enter %d integers:", size);
    int arr[size];
    for (int i=0; i<size; i++)
    scanf("%d", &arr[i]);
    //printning the original array
    printf("\nOriginal array:\n");
    for(int i=0; i<size; i++)
    printf("%d", arr[i]);

    //Now reversing the array
    int start=0;
    int end=size-1;
    while(start<end){
    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;}
    printf("\nReversed Array:\n");
    for(int i=0; i<size; i++)
    printf("%d", arr[i]);
    return 0;
}
