#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
    char ch = ' ';
    srand(time(0));
    printf("Press Enter");
    scanf("%c", &ch);
    int number = rand()%2;
    if(number == 0){
        printf("Heads!");
    }
    else{
        printf("Tails!");
    }
}