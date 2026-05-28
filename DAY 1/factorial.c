#include<stdio.h>

int main(){
    int n,i,factorial=1;
    printf("Enter the number :");
    scanf("%d",&n);

    if(n<0){
        printf("Factorial of negative number is not possible");
    }
    else if(n == 0){
        factorial = 1;
        printf("Factorial of 0 is %d",factorial);
    }
    else {
        for(i = 1 ; i<=n; i++){
            factorial *= i;
        }
        printf("Fcatorial of %d number is %d",n,factorial);
    }
    return 0;
}