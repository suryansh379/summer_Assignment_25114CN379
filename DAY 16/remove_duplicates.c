//WRITE A PROGRAM TO REMOVE DUPLICATES FROM ARRAY
#include<stdio.h>

int main(){
    int a[25],n;
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter array elements :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                for(int k = j; k < n-1; k++){
                    a[k] = a[k+1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates :\n");
    for(int i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
    return 0;
}