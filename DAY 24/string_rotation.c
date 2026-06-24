//WRITE A PROGRAM TO CHECK STRING ROTATION
#include<stdio.h>
#include<string.h>

int main(){
    char a[25],b[25],temp[25];

    printf("Enter first string : ");
    scanf("%s",a);

    printf("Enter second string : ");
    scanf("%s",b);

    if(strlen(a) != strlen(b)){
        printf("Not rotation !!");
        return 0;
    }

    strcpy(temp,a);
    strcat(temp,a);

    if(strstr(temp,b) != NULL){
        printf("Rotation string !!");
    }
    else{
        printf("Not rotation !!");
    }
    return 0;
}