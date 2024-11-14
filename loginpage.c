#include<stdio.h>
#include<string.h>
int main(){
    char user[5]="admin";
    char pass[5]="dummy";
    char userin[20], passin[20];
    printf("ENTER USERNAME: ");
    gets(userin);
    printf("ENTER PASSWORD: ");
    gets(passin);
    for(int i=0; i<5; i++){
        if (strncmp(user,userin,5)==0)
        {
            if(strncmp(pass,passin,5)==0){
                printf("You are logged in!!");
                break;
            }
            else{
                printf("wrong password!");
                break;
            }
        }
        else{
            printf("Wrong username!");
            break;
        }
        
    }
    return 0;
}