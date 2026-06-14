//WRITE A PROGRAM TO SECOND LARGEST ELEMENT
#include<stdio.h>

int main(){
    int a[25],n,largest,second;
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter elements of array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    if(a[0] > a[1]){
        largest = a[0];
        second = a[1];
    }
    else{
        largest = a[1];
        second = a[0];
    }

    for(int i = 2; i < n; i++){
        if(a[i] > largest){
            second = largest;
            largest = a[i];
        }
    }

    printf("Second largest element in the array is %d",second);
    
    return 0;
}