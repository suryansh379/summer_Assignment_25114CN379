//WRITE A PROGRAM TO WRITE FUNCTION TO FIND MAXIMUM
#include<stdio.h>

int maximum(int x, int y);

int main(){
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    maximum(a,b);
    printf("Maximum = %d",maximum(a,b));
    return 0;
}

int maximum(int x, int y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}