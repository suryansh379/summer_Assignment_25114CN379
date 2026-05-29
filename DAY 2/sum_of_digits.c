#include<stdio.h>

int main(){
    int n,r,sum = 0,num;
    printf("Enter a number :");
    scanf("%d",&n);
    num = n;

    while(n > 0){
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("Sum of digit of number %d is %d",num,sum);
    return 0;
}