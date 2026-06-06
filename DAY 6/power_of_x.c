//WAP TO FIND X^N WITHOUT POW()
#include<stdio.h>

int main(){
    int n,x,power=1;
    printf("Enter a power number :");
    scanf("%d",&n);

    printf("Enter a base number :");
    scanf("%d",&x);

    for(int i = 1; i <= n; i++){
        power = power * x;
    }

    printf("%d Power of %d is %d",n,x,power);
    return 0;
}