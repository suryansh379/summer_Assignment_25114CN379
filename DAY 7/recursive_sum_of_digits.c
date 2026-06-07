//WRITE A PROGREAM TO RECURSIVE SUM OF DIGITS
#include<stdio.h>

void sum_of_digits(int x);

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    sum_of_digits(n);
    return 0;
}

void sum_of_digits(int x){
    int r,sum = 0,num;

    num = x;

    while(x > 0){
        r = x % 10;
        sum = sum + r;
        x = x / 10;
    }
    printf("Sum of digit of number %d is %d",num,sum);
}