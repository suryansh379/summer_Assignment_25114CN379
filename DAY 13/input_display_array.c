//WRITE A PROGRAM TO INPUT AND DISPLAY ARRAY
#include<stdio.h>

int main(){
    int n,a[25];
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Elements of array are :\n");
    for(int i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
    return 0;
}