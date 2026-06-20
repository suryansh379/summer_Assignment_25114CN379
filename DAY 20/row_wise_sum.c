//WRITE A PROGRAM TO FIND ROW-WISE SUM
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

    for(int i = 0; i < r; i++){
        sum = 0;
        for(int j = 0; j < c; j++){
            sum = sum + a[i][j];
        }
        printf("Sum of row %d = %d\n",i+1,sum);
    }
    return 0;
}