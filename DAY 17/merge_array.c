//WRITE A PROGRAM TO MERGE ARRAY
#include<stdio.h>

int main(){
    int a[25],b[25],c[25],n,m;
    printf("Enter number of elements in array 1:");
    scanf("%d",&n);

    printf("Enter number of elements in array 2:");
    scanf("%d",&m);

    printf("Enter elements of array 1 :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter elements of array 2 :\n");
    for(int i = 0; i < m; i++){
        scanf("%d",&b[i]);
    }

    for(int i = 0; i < n; i++){
        c[i] = a[i];
    }

    for(int i = 0; i < m; i++){
        c[n + i] = b[i];
    }

    for(int i = 0; i < n+m; i++){
        printf("%d\t",c[i]);
    }
    return 0;
}