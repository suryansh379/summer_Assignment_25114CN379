//WRITE A PROGRAM TO MOVE ZEROS TO END
#include<stdio.h>

int main(){
    int a[25],n,j=0,temp;
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeros to end :\n");
    for(int i = 0; i < n; i++){
        printf("%d",a[i]);
    }
    return 0;
}