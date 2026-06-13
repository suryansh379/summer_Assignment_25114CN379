//WRITE A PROGRAM TO FIND SUM AND AVERAGE OF ARRAY
#include<stdio.h>

int main(){
    int n,a[25],sum = 0;
    float average;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++){
        sum = sum + a[i];
    }

    average = sum / n;

    printf("Sum of array elements are : %d\n",sum);
    printf("Average of array elements are : %f\n",average);
    return 0;
}