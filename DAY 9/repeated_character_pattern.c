//WRITE A PROGRAM TO PRINT REPEATED CHARACTER PATTERN
#include<stdio.h>

int main(){
    int n;
    printf("Enter number of rows :");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%c",'A' + i);
        }
        printf("\n");
    }
    return 0;
}