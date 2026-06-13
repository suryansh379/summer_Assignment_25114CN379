//WRITE A PROGRAM TO COUNT EVEN AND ODD ELEMENTS
#include<stdio.h>

int main(){
    int n,a[25],even = 0,odd = 0;
    printf("Enter the number of elements in array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 1; i <= n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 1; i <= n; i++){
        if(a[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Number of even elements in array : %d\n",even);
    printf("Number of odd elements in array : %d\n",odd);
    return 0;
}