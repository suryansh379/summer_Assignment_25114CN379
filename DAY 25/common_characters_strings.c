//WRITE A PROGRAM TO FIND COMMON CHARACTERS IN STRINGS
#include<stdio.h>

int main(){
    char a[25],b[25];
    printf("Enter first string : ");
    scanf("%s",a);

    printf("Enter second string : ");
    scanf("%s",b);

    printf("Common characters :");
    for(int i = 0; a[i] != '\0'; i++){
        int exist = 0;
        for(int k = 0; k < i; k++){
            if(a[i] == a[k]){
                exist = 1;
                break;
            }
        }

        if(exist)
            continue;
        
        for(int j = 0; b[j] != '\0'; j++){
            if(a[i] == b[j]){
                printf("%c\t",a[i]);
                break;
            }
        }
    }
    return 0;
}