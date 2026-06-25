//WRITE A PROGRAM TO MERGE TWO SORTED ARRAYS
#include<stdio.h>

int main(){
    int a[25],b[25],c[25],i,j,k=0,n,m;
    printf("Enter number of elements in 1st array : ");
    scanf("%d",&n);
    
    printf("Enter elements of 1st array :\n");
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter number of elements in 2nd array : ");
    scanf("%d",&m);
    
    printf("Enter elements of 2nd array :\n");
    for(i = 0; i < m; i++){
        scanf("%d",&b[i]);
    }

    i = 0, j= 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < n){
        c[k] = a[i];
        i++;
        k++;
    }

    while(j < m){
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged array :\n");
    for(i = 0; i < k; i++){
        printf("%d\t",c[i]);
    }
    return 0;
}