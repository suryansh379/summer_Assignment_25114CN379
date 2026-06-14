//WRITE A PROGRAM TO FIND DUPLICATES IN AN ARRAY
#include<stdio.h>

int main(){
    int a[25],n,item,duplicate=0;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to found :");
    scanf("%d",&item);

    for(int i = 0; i < n; i++){
        if(item == a[i]){
            printf("Duplicate of item %d is present at location %d\n",item,i+1);
            duplicate++;
        }
    }

    if(duplicate == 0){
        printf("Duplicate of item %d is not present in the array !!\n",item);
    }
    else{
        printf("Duplicate of item %d is present in the array %d times\n",item,duplicate);
    }
    return 0;
}