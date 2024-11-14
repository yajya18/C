#include<stdio.h>
int main(){
    char name[10];int age;
    printf("What's your name? ");
    gets(name);
    printf("What is your age");
    scanf("%d", age);
    if(age >=18){
        printf("Hi %s, your are eligible to vote.", name);
    }
    else if(age>0 && age<18){
        printf("Hi %s, you are not eligible to vote.", name);
    }
    return 0;
}
