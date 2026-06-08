//WRITE A PROGRAM TO PRINT NUMBER TRIANGLE
#include<stdio.h>

int main(){
    int m;
    printf("Enter the number of rows :");
    scanf("%d",&m);

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}