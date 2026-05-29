#include<stdio.h>

int main(){
    int n,r,sum = 0,num;
    printf("Enter a number :");
    scanf("%d",&n);
    num = n;

    while(n > 0){
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    if(sum == num){
        printf("Given number is a palindrome number !!");
    }
    else{
        printf("Given number is not a palindrome number !!");
    }
    return 0;
}