//WRITE A PROGRAM TO SUBTRACT MATRICES
#include<stdio.h>

int main(){
    int a[25][25],b[25][25],c[25][25],n;
    printf("Enter order of all matrices : ");
    scanf("%d",&n);

    printf("Enter elements of matrix 1 : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of matrix 2 : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = 0;
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Added matrix : \n");
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
        printf("%d\t",c[i][j]);
       }
       printf("\n");
    }
    return 0;
}