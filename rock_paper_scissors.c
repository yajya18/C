#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
    srand(time(0));
    int output = rand()%3;
    int input;
    char str1[25] = "stone";
    char str2[25] = "paper";
    char str3[25] = "scissors";
    printf("Stone, paper or scissors (0,1 or 2): ");
    scanf("%d", &input);
    
    if(output==0 && input==0){
        printf("Stone.\n");
        printf("It's a draw!!");
    }
    else if(output==0 && input==1){
        printf("Stone.\n");
        printf("You won!!");
    }
    else if(output==0 && input==2){
        printf("Stone.\n");
        printf("You lost!!");
    }
    else if(output==1 && input==0){
        printf("Paper.\n");
        printf("You lost!!");
    }
    else if(output==1 && input==1){
        printf("Paper.\n");
        printf("It's a draw!!");
    }
    else if(output==1 && input==2){
        printf("Paper.\n");
        printf("You won!!");
    }
    else if(output==2 && input==0){
        printf("Scissors.\n");
        printf("You won!!");
    }
    else if(output==2 && input==1){
        printf("Scissors.\n");
        printf("You lost!!");
    }
    else if(output==2 && input==2){
        printf("Scissors.\n");
        printf("It's a draw!!");
    }
}