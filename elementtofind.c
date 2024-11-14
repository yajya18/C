#include<stdio.h>
int main(){
    int size, elementtoffind;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    printf("Enter %d integers:", size);
    int arr[size];
    for(int i=0; i<size; i++)
    scanf("%d",&arr[i]);
    printf("Enter the element to find: ");
    scanf("%d", &elementtoffind);
    int found=0;
    int position;
    for(int i=0; i<size; i++){
        if(arr[i]==elementtoffind){
            position=i;
            found=1;
            break;
        }
    }
    int j=position+1;
        if(found){
        printf("%d is the %dth element of this array.",elementtoffind,j);
    }
    else{
        printf("%d is not in this array.", elementtoffind);
    }
    return 0;
}