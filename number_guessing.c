#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int guess;
    int guesses = 0;
    int answer;
    answer = (rand()%100)+1;
    do{
        printf("Enter a gusess from 1 to 100: ");
        scanf("%d", &guess);
        if(guess<answer){
            printf("It's high\n");
        }
        else if(guess>answer){
            printf("It's low\n");
        }
        else{
            printf("CORRECT!!\n");
        }
        guesses++;
    }while (guess != answer);
    printf("**********\n");
    printf("The answer is %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("**********\n");
    return 0;
}