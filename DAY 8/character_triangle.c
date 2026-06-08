//WRITE A PROGRAM TO PRINT CHARACTER TRIANGLE
#include<stdio.h>

int main(){
    int m;
    printf("Enter the number of rows :");
    scanf("%d",&m);

    for(int i = 1; i <= m; i++){
        for(int j = 0; j < i; j++){
            printf("%c ",'A'+j);
        }
        printf("\n");
    }

    return 0;
}