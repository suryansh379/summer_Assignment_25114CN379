//WRITE A PROGRAM TO TRANSPOSE MATRIX
#include<stdio.h>

int main(){
    int a[25][25],b[25][25],row,coloumn;
    printf("Enter row & coloumn of matrices respectively : ");
    scanf("%d%d",&row,&coloumn);

    printf("Enter elements of matrix 1 :\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < coloumn; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < coloumn; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < coloumn; j++){
            b[j][i] = a[i][j];
        }
    }

    printf("Transpose matrix : \n");
    for(int i = 0; i < coloumn; i++){
        for(int j = 0; j < row; j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}