#include<stdio.h>

int main(){
    int n,sum =0;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("Fcators of number %d is :",n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d\t",i);
        }
    }

    return 0;
}