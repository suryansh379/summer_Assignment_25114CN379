#include<stdio.h>

int main(){
    int a,b,y,x,temp,gcd,lcm;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    
    y = a;
    x = b;

    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (y * x)/gcd;
    printf("LCM of number %d and %d = %d",y,x,lcm);
    return 0;
}