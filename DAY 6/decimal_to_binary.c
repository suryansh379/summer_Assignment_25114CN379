#include<stdio.h>

int main(){
    int n,r,d=1,sum=0,num;
    printf("Enter a number :");
    scanf("%d",&n);

    num = n;

    while(n > 0){
        r = n % 2;
        n = n / 2;
        sum = sum + d*r;
        d = d * 10;
    }

    printf("Binary number of decimal number is %d is %d",num,sum);
    return 0;
}