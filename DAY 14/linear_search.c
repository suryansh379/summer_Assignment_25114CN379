//WRITE A PROGRAM TO LINEAR SEARCH
#include<stdio.h>

int main(){
    int a[25],n,item,count=0;
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the item to be found : ");
    scanf("%d",&item);

    for(int i = 0; i < n; i++){
        if(item == a[i]){
            printf("Item %d is found on location %d\n",item,i+1);
            count++;
            break;
        }
    }

    return 0;
}