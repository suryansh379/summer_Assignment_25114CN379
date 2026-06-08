//WRITE A PROGRAM TO PRINT REPEATED NUMBER
#include<stdio.h>

int main(){
    int m;
    printf("Enter the number of rows :");
    scanf("%d",&m);

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}