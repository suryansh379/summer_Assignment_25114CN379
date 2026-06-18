//WRITE A PROGRAM TO SORT ARRAY IN DESCENDING ORDER
#include<stdio.h>

int main(){
    int a[25],n,temp;
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted array in descending order :\n");
    for(int i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
    return 0;
}