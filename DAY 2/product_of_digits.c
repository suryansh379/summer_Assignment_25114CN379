#include<stdio.h>

int main(){
    int n,r,product=1,num;
    printf("Enter a number :");
    scanf("%d",&n);
    num = n;

    while(n > 0){
        r = n % 10;
        product = product * r;
        n = n / 10;
    }
    printf("Product of the digits of number %d is %d",num,product);
    return 0;
}