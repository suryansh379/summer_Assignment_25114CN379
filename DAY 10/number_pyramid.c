//WRITE A PROGRAM TO PRINT NUMBER PYRAMID
#include<stdio.h>

int main(){
    int n;
    printf("Enter number of rows :");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n -i; j++){ //for printing space
            printf(" ");
        }
        
        for(int j = 1; j <= i; j++){ //to print number pattern in forward direction
            printf("%d",j);
        }

        for(int j = i-1; j >= 1; j--){ //to print number pattern in reverse direction
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}