//WRITE A PROGRAM TO CHECK SYMMETRIC MATRIX
#include<stdio.h>

int main(){
    int a[25][25],n,symmetric=0;
    printf("Enter the order of matrix :");
    scanf("%d",&n);

    printf("Enter elements of matrix :\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]){
                symmetric = 0;
                break;
            }
        }

        if(symmetric == 0){
            break;
        }
    }

    if(symmetric == 0){
        printf("Matrix is not symmetric !!");
    }
    else{
        printf("Matrix is symmetric !!");
    }
    return 0;
}