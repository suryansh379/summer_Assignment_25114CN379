#include<stdio.h>

int main(){
    int n,count = 0;
    printf("Enter the number :");
    scanf("%d",&n);

    while(n>0){
        n = n/10;
        count ++;
    }
    printf("The total number of digits in a number = %d",count);
    return 0;
}