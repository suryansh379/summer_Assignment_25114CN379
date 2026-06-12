//WRITE A PROGRAM TO WRITE FUNCTION FOR PALINDROME
#include<stdio.h>

int palindrome(int x);

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    palindrome(n);
    if(palindrome(n) == n){
        printf("Given number is a palindrome number ");
    }
    else{
        printf("Given number is not a palindrome number ");
    }
    return 0;
}

int palindrome(int x){
    int r,sum = 0;
    while(x > 0){
        r = x % 10;
        sum = sum*10 + r;
        x = x / 10;
    }

    return sum;
}