//WRITE A PROGRAM TO UNION OF ARRAYS
#include<stdio.h>

int main(){
    int a[25],b[25],c[25],n,m,repeat,k=0;
    printf("Enter number of elements in array 1 :");
    scanf("%d",&n);

    printf("Enter number of elements in array 2 :");
    scanf("%d",&m);

    printf("Enter elements in array 1 :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        c[k ++] = a[i]; //take all element from 1st array
    }

    printf("Enter elements in array 2 :\n");
    for(int i = 0; i < m; i++){
        scanf("%d",&b[i]);
    }

    for(int i = 0; i < m; i++){
        repeat = 0;
        for(int j = 0; j < k; j++){
            if(b[i] == c[j]){
                repeat = 1;
                break;
            }
        }

        if(repeat == 0){
            c[k ++] = b[i];
        }
    }

    for(int i = 0; i < k; i++){
        printf("%d\t",c[i]);
    }
    return 0;
}