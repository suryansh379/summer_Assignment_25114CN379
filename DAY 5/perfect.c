#include<stdio.h>

int main(){
    int n,sum =0;
    printf("Enter a number :");
    scanf("%d",&n);

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }

    if(sum == n){
        printf("%d ia a perfect number !!",n);
    }
    else{
        printf("%d ia a not perfect number !!",n);
    }
    return 0;
}