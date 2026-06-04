#include<stdio.h>

int main(){
    int a=0,b=1,c,n;
    printf("Enter a number :");
    scanf("%d",&n);

    if(n == 1){
        printf("1st term of the series is %d",a);
    }
    else if(n == 2){
        printf("2nd term of the series is %d",b);
    }
    else{
        for(int i = 3; i <= n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        printf("%dth term of the fibonacci series is %d",n,c);
    }
    return 0;
}