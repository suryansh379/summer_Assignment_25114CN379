//WRITE A PROGRAM TO ROTATE ARRAY RIGHT
#include<stdio.h>

int main(){
    int a[25],n,rotate;
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    rotate = a[n - 1];

    for(int i = n-1; i > 0; i--){
        a[i] = a[i - 1];
    }

    a[0] = rotate;

    printf("Array after left rotation :\n");
    for(int i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
    return 0;
}