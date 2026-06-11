//WRITE A PROGRAM TO WRITE A FUNCTION TO FIND FACTORIAL
#include<stdio.h>

int factorial(int x);

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    factorial(n);
    if(n >= 0){
        printf("Factorial of number %d is %d",n,factorial(n));
    }
    return 0;
}

int factorial(int x){
    int factorial = 1;
    if(x < 0){
        printf("Factorial of negative number cannot be find");
    }
    else if(x == 0){
        factorial = 1;
    }
    else{
        for(int i = 1; i <= x; i++){
            factorial = factorial * i;
        }
    }

    return factorial;
}