//WRITE A PROGRAM TO CREATE NUMBER GUESSING GAME
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,attempts=0;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("--------NUMBER GUESSING GAME--------\n");
    printf("Guess a number between 1 and 100\n");

    do{
        printf("Enter your number : ");
        scanf("%d",&guess);

        attempts++;

        if(guess > number){
            printf("TOO HIGH !!!\n");
        }
        else if(guess < number){
            printf("TOO LOW !!!\n");
        }
        else{
            printf("CONGRATULATIONS ! YOU GUESSED THE CORRECT NUMBER !!\n");
            printf("Number = %d\n",number);
            printf("Attempts = %d\n",attempts);
        }
    }while(guess != number);
    return 0;
}