//WRITE A PROGRAM TO REVERSE A STRING
#include<stdio.h>

int main(){
    char str[25],temp;
    int length = 0;
    printf("Enter a string : ");
    scanf("%s",str);

    while(str[length] != '\0'){
        length++;
    }
    
    for(int i = 0; i < length/2; i++){
        temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }

    printf("Reversed string = %s",str);
    return 0;
}