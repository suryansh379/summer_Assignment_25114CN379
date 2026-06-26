//WRITE A PROGRAM TO CREATE VOTING ELIGIBILITY SYSTEM
#include<stdio.h>

int main(){
    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    if(age >= 18){
        printf("You are eligible to vote !");
    }
    else if(age > 0){
        printf("You are not eligible to vote !");
    }
    else{
        printf("INVALID AGE !!");
    }
    return 0;
}