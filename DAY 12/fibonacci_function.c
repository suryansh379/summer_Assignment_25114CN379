//WRITE A PROGRAM TO WRITE FUNCTION FOR FIBONACCI
#include<stdio.h>

void fibonacci(int x);

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}

void fibonacci(int x){
    int a = 0, b = 1,c;
    for(int i = 0; i < x; i++){
        printf("%d\t",a);
        c = a + b;
        a = b;
        b = c;
    }
}