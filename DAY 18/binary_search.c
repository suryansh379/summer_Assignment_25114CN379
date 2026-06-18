//WRITE A PROGRAM TO BINARY SEARCH
#include<stdio.h>

int main(){
    int a[25],n,beg,end,mid,item;
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter a sorted array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter item to be searched :");
    scanf("%d",&item);

    beg = 0 , end = n -1;
    while(beg <= end){
        mid = (beg + end)/2;
        if(a[mid] == item){
            printf("%d item is located at location %d !!",item,mid+1);
            break;
        }
        else if(a[mid] > item){
            end = mid -1;
        }
        else{
            beg = mid + 1;
        }
    }

    if(beg > end){
        printf("%d item is not present in the array !!");
    }
    return 0;
}