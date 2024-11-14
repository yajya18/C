#include<stdio.h>
int main(){
    char str[25];
    printf("Enter a string: ");
    gets(str);
    int x = printf("%s", str);
    printf("\nSize of string is %d", x);

    return 0;
}