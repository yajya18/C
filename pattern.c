#include<stdio.h>
int main(){
    int rows;
    int columns;
    int symbols;
    printf("Enter the no. of rows:");
    scanf("%d", &rows);

    printf("Enter the no. of columns:");
    scanf("%d", &columns);

    printf("Enter the no. of symbols:");
    scanf("%d", &symbols);

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=symbols; j++){
            printf("*");
        }
        printf("\n");
    }

    int rows2 = 1;
    int symbols2 = 2;
    return 0;
}