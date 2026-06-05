#include<stdio.h>

int main(){
    int n,largest = 1;
    printf("Enter a number :");
    scanf("%d",&n);

    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            largest = i;
            n = n / i;
        }
    }

    printf("Largest prime factor is %d",largest);
    return 0;
}