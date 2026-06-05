#include<stdio.h>

int main(){
    int n,r,temp,num,factorial,sum = 0;
    printf("Enter a number :");
    scanf("%d",&n);

    num = n;
    while(n > 0){
        r = n % 10;
        factorial = 1;
        for(int i = 1; i <= r; i++){
            factorial = factorial * i;
        }
        sum = sum + factorial;
        n = n / 10;
    }

    if(sum == num){
        printf("%d is a strong number !!",num);
    }
    else{
        printf("%d is a not strong number !!",num);
    }
    return 0;
}