#include<stdio.h>
#include<math.h>

int main(){
    int n,r,sum=0,num,num1,c=0;
    printf("Enter a number :");
    scanf("%d",&n);

    num = n;

    while(n > 0){
        n = n / 10;
        c = c + 1;
    }

    num1 = num;

    while(num > 0){
        r = num % 10;
        sum = sum + pow(r,c);
        num = num / 10;
    }

    printf("%d",sum);

    if(sum == num1){
        printf("%d is a armstrong number !!",num1);
    }
    else{
        printf("%d is a not a armstrong number !!",num1);
    }
    return 0;
}