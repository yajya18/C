#include<stdio.h>
#include<ctype.h>
int main()
{
char unit;
float temp;

printf("\nThe temperature currently is in F or C?");
scanf("%c", &unit);
unit = toupper(unit);

if(unit== 'F'){
    printf("\nEnter the temperature in Farenheit:");
    scanf("%f", &temp);
    printf("\nThe temperature in Celcius is: %.1f", ((temp-32)*5)/9);
}
else if(unit=='C'){
    printf("\nEnter the temperature in Celcius:");
    scanf("%f", &temp);
    printf("\nThe temperature in Farenheit is: %.1f", (temp*9/5)+32);
}
else{
    printf("\n%c is not a vlid unit for conversion.");
}
    return 0;
}