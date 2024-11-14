#include<stdio.h>
int main(){
    int size, elementtodelete;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter %d elements:", size);
    int arr[size];
    for(int i=0; i<size; i++)
    scanf("%d", &arr[i]);

    printf("Enter the element to delete:");
    scanf("%d", &elementtodelete);

    int found = 0;

    for(int i=0; i<size; i++){
        if(arr[i]==elementtodelete){
            for(int j=i; j<size-1;j++){
                arr[j]=arr[j+1];
                found = 1;
                size--;
                break; 
            }
        }
        
    }
    if(found){
        printf("\n%d is deleted.", elementtodelete);
        printf("\nUpdated array:\n");
        for (int i = 0; i <size; i++)
        {
            printf("%d",arr[i]);
        }
        
    }
    else{
        printf("%d is not in the array:", elementtodelete);
    }
    return 0;
}