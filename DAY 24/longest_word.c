//WRITE A PROGRAM TO FIND LONGEST WORD
#include<stdio.h>

int main(){
    char a[25],longest[25],word[25];
    int i=0,j=0,maxLen=0,len=0;

    printf("Enter a string : ");
    fgets(a,sizeof(a),stdin);

    while(a[i] != '\0'){
        if(a[i] != ' ' && a[i] != '\n'){
            word[len++] = a[i];
        }
        else{
            word[len] = '\0';
            if(len > maxLen){
                maxLen = len;
                strcpy(longest,word);
            }
            len = 0; 
        }
        i++;
    }

    printf("Longest word = %s\n",longest);
    printf("Length = %d",maxLen);
    return 0;
}