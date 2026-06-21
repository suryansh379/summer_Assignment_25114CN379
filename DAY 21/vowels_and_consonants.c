//WRITE A PROGRAM TO COUNT VOWELS AND CONSONANTS
#include<stdio.h>

int main(){
    char str[25];
    int vowel=0,consonant=0,i=0;

    printf("Enter a string : ");
    scanf("%s",str);

    while(str[i] != '\0'){
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                vowel++;
               }
            else{
                consonant++;
            }
        }
        i++;
    }

    printf("Vowel = %d\n",vowel);
    printf("Consonant = %d\n",consonant);
    return 0;
}