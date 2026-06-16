//WRITE A PROGRAM TO FIND MISSING NUMBER IN ARRAY
#include<stdio.h>

int main(){
    int a[25],n,sum=0,missing,expectedsum;
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter %d elements :\n",n-1);

    for(int i = 0;i < n-1; i++){
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }

    expectedsum = (n*(n+1))/2;

    missing = expectedsum - sum;
    printf("Missing number = %d",missing);
    return 0;
}