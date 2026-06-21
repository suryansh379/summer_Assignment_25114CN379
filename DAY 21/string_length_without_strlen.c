//WRITE A PROGRAM TO FIND STRING LENGTH WITHOUT STRLEN()
#include<stdio.h>

int main(){
    char str[25];
    int length = 0;
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);

    while(str[length] != '\0' && str[length] != '\n'){
        length++;
    }

    printf("Length of given string = %d",length);
    return 0;
}