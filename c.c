#include<stdio.h>
void eligible_to_vote(int age, char name[10]);
int main(){
    char name[10];
    int age;
    printf("What's your name? ");
    gets(name);
    printf("What is your age? ");
    scanf("%d", age);
    void eligible_to_vote(int age, char name[10]);
    
    return 0;
}
void eligible_to_vote(int age,char name[10]){
    if(age>=18){
        printf("Hi %s, you are eligible to vote.", name);
    }
    else if(age>=0 && age<18){
        printf("Hi %s, you are not eligible to vote.", name);
    }
}
