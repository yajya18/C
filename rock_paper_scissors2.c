#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void main(){
    srand(time(0));
    int output = rand()%3;
    int input;
    char str0[25] = "stone";
    char str1[25] = "paper";
    char str2[25] = "scissors";
    char str[25];
    printf("Stone, paper or scissors: ");
    gets(str);
    strlwr(str);

    for(int i=0; i<sizeof(str)/sizeof(str[0]); i++){
        if(str[i]==str0[i] && output==0){
        printf("Stone.\n");
        printf("It's a draw!!");
        break;
        }
        else if(str[i]==str0[i] && output==1){
        printf("Paper.\n");
        printf("You lost!!");
        break;
        }
        else if(str[i]==str0[i] && output==2){
        printf("Scissors.\n");
        printf("You won!!");
        break;
        }
        else if(str[i]==str1[i] && output==0){
        printf("Stone.\n");
        printf("You won!!");
        break;
        }
        else if(str[i]==str1[i] && output==1){
        printf("Paper.\n");
        printf("It's a draw!!");
        break;
        }
        else if(str[i]==str1[i] && output==2){
        printf("Scissors.\n");
        printf("You lost!!");
        break;
        }
        else if(str[i]==str2[i] && output==0){
        printf("Stone.\n");
        printf("You lost!!");
        break;
        }
        else if(str[i]==str2[i] && output==1){
        printf("Paper.\n");
        printf("You won!!");
        break;
        }
        else if(str[i]==str2[i] && output==2){
        printf("Scissors.\n");
        printf("It's a draw!!");
        break;
        }
        else{
            printf("**Enter a valid entry**");
            break;
        }
    }
    
    
}