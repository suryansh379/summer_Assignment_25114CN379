//WRITE A PROGRAM TO WRITE FUNCTION TO CHECK PRIME
#include<stdio.h>

void prime(int x);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    prime(n);
    return 0;
}

void prime(int x){
    int prime = 0;
    if(x <= 1){
        prime = 1;
    }
    else{
        for(int i = 2; i <= (x/2); i++){
            if(x % i == 0){
                prime = 1;
                break;
            }
        }
    }
    if(prime == 0){
        printf("%d is a prime number",x);
    }
    else{
        printf("%d is not a prime number",x);
    }
}