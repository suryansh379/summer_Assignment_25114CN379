#include<stdio.h>

int main(){
    int n,r,sum=0,d=1,num;
    printf("Enter a number :");
    scanf("%d",&n);

    num = n;
    
    while(n > 0){
        r = n % 10;
        n = n / 10;
        sum = sum + d*r;
        d = d *2;
    }

    printf("binary to decimal of number %d is %d",num,sum);
    return 0;
}