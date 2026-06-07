//WRITE A PROGRAM TO RECURSIVE FIBONACCI
#include<stdio.h>

void fibonacci(int n);

int main(){
    int x;
    printf("Enter a number upto which the series is expanded :");
    scanf("%d",&x);
    fibonacci(x);
    return 0;
}

void fibonacci(int n){
    int a = 0, b = 1,c;
    for(int i = 1; i <= n; i++){
        printf("%d\t",a);
        c = a + b;
        a = b;
        b = c;
    }
}