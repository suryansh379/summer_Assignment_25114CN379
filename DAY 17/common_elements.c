//WRITE A PROGRAM TO FIND COMMON ELEMENTS
#include<stdio.h>

int main(){
    int a[25],b[25],n,m;
    printf("Enter number of elements in array 1 :");
    scanf("%d",&n);

    printf("Enter number of elements in array 2 :");
    scanf("%d",&m);

    printf("Enter elements of array 1 :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter elements of array 2 :\n");
    for(int i = 0; i < m; i++){
        scanf("%d",&b[i]);
    }

    printf("Common elements in array 1 & 2 are :\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                printf("%d\t",a[i]);
                break;
            }
        }
    }
    return 0;
}