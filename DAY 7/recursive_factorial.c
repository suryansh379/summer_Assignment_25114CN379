//WRITE A PROGRAM TO RECURSIVE FACTORIAL
#include<stdio.h>

void factorial(int n);

int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    factorial(x);
    return 0;
}

void factorial(int n){
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial = factorial * i;
    }
    printf("Factorial of number %d is %d",n,factorial);
}