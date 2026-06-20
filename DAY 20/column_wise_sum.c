//WRITE A PROGRAM TO FIND COLUMN-WISE SUM
#include<stdio.h>

int main(){
    int a[25][25],r,c,sum;
    printf("Enter row and coloumn of matrix respectively : ");
    scanf("%d%d",&r,&c);

    printf("Enter elements of matrix :\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int j = 0; j < c; j++){
        sum = 0;
        for(int i = 0; i < c; i++){
            sum = sum + a[i][j];
        }
        printf("Sum of column %d = %d\n",j+1,sum);
    }
    return 0;
}