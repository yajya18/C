//fibonacci
#include<stdio.h>
#include<ctype.h>
int fib(int n){
    
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n-2);
    int fibn = fibnm1+fibnm2;
    return fibn;
}
int main(int n){
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci of %d is: %d", n, fib(n));
    return 0;
}