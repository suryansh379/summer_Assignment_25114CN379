//WRITE A PROGRAM TO WRITE FUNCTION TO FIND SUM OF TWO NUMBERS
#include<stdio.h>

void sum(int x, int y);

int main(){
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}

void sum(int x, int y){
    int sum;
    sum = x + y;
    printf("Sum of the given two numbers is : %d",sum);
}