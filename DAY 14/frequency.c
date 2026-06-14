//WRITE A PROGRAM TO FREQUENCY OF AN ELEMENT
#include<stdio.h>

int main(){
    int a[25],n,item,count=0;
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter element to be found :");
    scanf("%d",&item);

    for(int i = 0; i < n; i++){
        if(item == a[i]){
            count++;
            // break;ṇ
        }
    }

    if(count == 0){
        printf("Item %d is not present in the array !!",item);
    }
    else{
        printf("Item %d is present in the array %d times",item,count);
    }
    return 0;
}