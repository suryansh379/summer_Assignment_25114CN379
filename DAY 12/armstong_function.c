//WRITE A PROGRAM TO WRITE FUNCTION FOR ARMSTRONG
#include<stdio.h>
#include<math.h>

int armstrong(int x);

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    armstrong(n);
    if(armstrong(n) == n ){
        printf("%d is a armstrong number !!",n);
    }
    else{
        printf("%d is not a armstrong number !!",n);
    }
    return 0;
}

int armstrong(int x){
    int y,sum = 0,c = 0,r;
    y = x;
    while( x > 0){
        x = x / 10;
        c++;
    }

    while(y > 0){
        r = y % 10;
        sum = sum + pow(r,c);
        y = y / 10;
    }

    return sum;
}