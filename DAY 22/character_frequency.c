//WRITE A PROGRAM TO CHARACTER FREQUENCY
#include<stdio.h>

int main(){
    char str[25],ch;
    int count =0;

    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);

    printf("Enter character to find frequency : ");
    scanf("%c",&ch);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            count++;
        }
    }

    printf("Frequency of '%c' = %d",ch,count);
    return 0;
}