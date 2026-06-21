//WRITE A PROGRAM TO CONVERT LOWERCASE TO UPPERCASE
#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[25];
    int i = 0;

    printf("Enter a string : ");
    scanf("%s",str);

    while(str[i] != '\0'){
        str[i] = toupper(str[i]);
        i++;
    }

    printf("Uppercase string = %s",str);
    return 0;
}