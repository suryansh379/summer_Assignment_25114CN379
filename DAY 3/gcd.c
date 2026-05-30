#include<stdio.h>

int main(){
    int a,b,y,x,temp;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    
    y = a;
    x = b;

    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD of numbers %d and %d = %d",y,x,a);
    return 0;
}