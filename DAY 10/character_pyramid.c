//WRITE A PROGRAM TO PRINT CHARACTER PYRAMID
#include<stdio.h>

int main(){
    int n;
    printf("Enter number of rows :");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n -i; j++){ //for printing space
            printf(" ");
        }
        
        for(int j = 0; j <= i; j++){ //to print character pattern in forward direction
            printf("%c",'A'+j);
        }

        for(int j = i-1; j >= 0; j--){ //to print character pattern in reverse direction
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}