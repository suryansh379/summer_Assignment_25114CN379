//WRITE A RPOGRAM TO CHECK PALINDROME STRING
#include<stdio.h>
#include<string.h>

int main(){
    char string[25];
    int length,palindrome=1;
    printf("Enter a string : ");
    scanf("%s",string);

    length = strlen(string);

    for(int i = 0; i < length/2; i++){
        if(string[i] != string[length - 1 -i]){
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 0){
        printf("Given string is not a palindrome string !!");
    }
    else{
        printf("Given string is a palindrome string !!");
    }
    return 0;
}