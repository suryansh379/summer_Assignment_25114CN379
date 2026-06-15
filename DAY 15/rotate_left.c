//WRITE A PROGRAM TO ROTATE ARRAY LEFT
#include<stdio.h>

int main(){
    int a[25],n,rotate;
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    rotate = a[0];

    for(int i = 0; i < n-1; i++){
        a[i] = a[i + 1];
    }

    a[n -1] = rotate;

    printf("Array after left rotation :\n");
    for(int i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
    return 0;
}