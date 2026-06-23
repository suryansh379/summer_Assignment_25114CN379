//WRITE A PROGRAM TO FIND MAXIMUM OCCURING CHARACTER
#include<stdio.h>

int main(){
    char str[25],maxChar;
    int count,maxCount = 0;

    printf("Enter a string : ");
    scanf("%s",str);

    for(int i = 0; str[i] != '\0'; i++){
        count = 0;
        for(int j = 0; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                count++;
            }
        }

        if(count > maxCount){
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occuring character = %c\n",maxChar);
    printf("Frequency = %d",maxCount);
    return 0;
}