//WAP TO COUNT SET BITS IN A NUMBER
#include<stdio.h>

int main(){
    int n,count=0,num;
    printf("Enter a number :");
    scanf("%d",&n);

    num = n;

    while(n > 0){
        if(n % 2 == 1){
            count++;
        }
        n = n / 2;
    }

    printf("Total number of set bits in number %d is %d",num,count);
    return 0;
}