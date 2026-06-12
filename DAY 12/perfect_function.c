//WRITE A PROGRAM TO WRITE FUNCTION FOR PERFECT NUMBER
#include<stdio.h>

int perfect(int n);

int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    perfect(x);
    if(perfect(x) == x){
        printf("%d is a perfect number !!",x);
    }
    else{
        printf("%d is not a perfect number !!",x);
    }
    return 0;
}

int perfect(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }

    return sum;
}