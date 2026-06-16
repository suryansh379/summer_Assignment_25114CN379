//WRITE A PROGRAM TO FIND PAIR WITH GIVEN SUM
#include<stdio.h>

int main(){
    int a[25],n,sum,pair=0;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the required sum :");
    scanf("%d",&sum);

    printf("Pairs are :\n");
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] + a[j] == sum){
                printf("(%d,%d)\n",a[i],a[j]);
                pair++;
            }
        }
    }


    if(pair == 0){
        printf("No pair found !!");
    }
    return 0;
}