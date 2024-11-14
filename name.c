#include <stdio.h>
#include <string.h>
int main ()
{
float age;
char name[100];

printf("\nHi, what's your name?");
// scanf("%s", &name);
// fgets(name, 100, stdin);
gets(name);

printf("\nWhat is your age?");
scanf("%f", &age);

printf("\nHello %s!!!", name);
printf("\nYou are %.0f years old.", age);



    return 0; 
}