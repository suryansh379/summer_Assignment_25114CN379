//WRITE A PROGRAM TO PRINTF HALF PYRAMID PATTERN
#include<stdio.h>

int main(){
    int m,n;
    printf("Enter the number of rows :");
    scanf("%d",&m);

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}