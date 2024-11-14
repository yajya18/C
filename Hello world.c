#include <stdio.h>
int main(){
    int size;
    char name[size];
    printf("Enter your name: ");
    gets(name);
    size = sizeof(name)/sizeof(name[0]);
    printf("\n Hello %s, how are you? ", name);
return 0;
}