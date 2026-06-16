//WRITE A PROGRAM TO FIND MAXIMUM FREQUENCY ELEMENT
#include<stdio.h>

int main(){
    int a[25],n,maxfreq=0,element,count;
    printf("Enter number of elements in array :");
    scanf("%d",&n);

    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++){
        count = 1;
        for(int j = i +1; j < n; j++){
            if(a[i] == a[j]){
                count++;
            }
        }

        if(count > maxfreq){
            maxfreq = count;
            element = a[i];
        }
    }

    printf("Maximum frequency element = %d\n",element);
    printf("Frequency = %d",maxfreq);
    return 0;
}