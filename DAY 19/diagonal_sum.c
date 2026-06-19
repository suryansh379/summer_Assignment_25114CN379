//WRITE A PROGRAM TO FIND DIAGONAL SUM
#include<stdio.h>

int main(){
    int a[25][25],n,sum = 0;
    printf("Enter order of a squared matrix : ");
    scanf("%d",&n);

    printf("Enter elements of matrix : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                sum = sum + a[i][j];
            }
        }
    }

    printf("Sum of diagonal elements of matrix : %d",sum);
    return 0;
}