//WRITE A PROGRAM TO REVERSE ARRAY
#include<stdio.h>

int main(){
    int a[25],n,temp;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++){
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 -i] = a[i];
    }

    printf("Reversed array :\n");
    for(int i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
    return 0;
}