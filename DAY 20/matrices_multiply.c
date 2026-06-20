//WRITE A PROGRAM TO MULTIPLY MATRICES
#include<stdio.h>

int main(){
    int a[25][25],b[25][25],c[25][25],r1,c1,r2,c2,sum = 0;
    printf("Enter row and coloumn of matrix 1 :");
    scanf("%d%d",&r1,&c1);

    printf("Enter row and coloumn of matrix 2 :");
    scanf("%d%d",&r2,&c2);

    if(r2 == c1){
        printf("Enter elements of matrix 1 :\n");
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c1; j++){
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter elements of matrix 1 :\n");
        for(int i = 0; i < r2; i++){
            for(int j = 0; j < c2; j++){
                scanf("%d",&b[i][j]);
            }
        }

        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                for(int k = 0; k < c1; k++){
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }

        printf("Multiplied matrix :\n");
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Matrix multiplication is not possible as r2 and c1 are different !!");
    }
    return 0;
}