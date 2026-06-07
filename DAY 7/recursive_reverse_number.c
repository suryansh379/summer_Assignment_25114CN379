//WRITE A PROGRAM TO RECURSIVE REVERSE NUMBER 
#include<stdio.h>

void reverse_number(int x);

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    reverse_number(n);
    return 0;
}

void reverse_number(int x){
    int r,sum = 0,num;

    num = x;

    while(x > 0){
        r = x % 10;
        sum = sum * 10 + r;
        x = x /10;
    }
    printf("Reverse of number %d is %d",num,sum);
}