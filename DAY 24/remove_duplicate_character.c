//WRITE A PROGRAM TO REMOVE DUPLICATE CHARACTERS
#include<stdio.h>

int main(){
    char a[25];

    printf("Enter a string : ");
    scanf("%s",a);

    for(int i = 0; a[i] != '\0'; i++){
        for(int j = i+1; a[j] != '\0'; j++){
            if(a[i] == a[j]){
                for(int k = j; a[k] != '\0'; k++){
                    a[k] = a[k+1];
                }
            }
            else{
                j++;
            }
        }
    }

    printf("String after removing duplicates = %s",a);
    return 0;
}