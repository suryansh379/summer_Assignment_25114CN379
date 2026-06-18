//WRITE A PROGRAM TO BUBBLE SORT
#include<stdio.h>

int main(){
    int a[25],n,temp;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);

    printf("Enter elements of array : \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Sorted array :\n");
    for(int i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
    return 0;
}