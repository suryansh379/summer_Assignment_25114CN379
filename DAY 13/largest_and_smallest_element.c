//WRITE A PROGRAM TO FIND LARGEST AND SMALLEST ELEMENT
#include<stdio.h>

int main(){
    int n,a[25],largest,smallest;
    printf("Enter the number of elements in array :");
    scanf("%d",&n);

    printf("Enter elements of the array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    largest = smallest = a[0];

    for(int i = 1; i < n; i++){
        if(a[i] > largest){
            largest = a[i];
        }

        if(a[i] < smallest){
            smallest = a[i];
        }
    }

    printf("Largest element in array is %d\n",largest);
    printf("Smallest element in array is %d\n",smallest);
    return 0;
}