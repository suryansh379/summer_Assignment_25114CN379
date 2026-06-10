//WRITE A PROGRAM TO PRINT REVERSE STAR PYRAMID
#include<stdio.h>

int main(){
    int n;
    printf("Enter number of rows :");
    scanf("%d",&n);

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n -i; j++){ //for printing space
            printf(" ");
        }
        
        for(int j = 1; j <= 2*i-1; j++){ //for star pattern
            printf("*");
        }
        printf("\n");
    }
    return 0;
}