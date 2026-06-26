//WRITE A PROGRAM TO CREATE QUIZ APPLICATION
#include <stdio.h>

int main()
{
    int score = 0;
    char ans;

    printf("===== QUIZ APPLICATION =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("a) Mumbai\nb) Delhi\nc) Kolkata\nd) Chennai\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'b' || ans == 'B')
        score++;

    // Question 2
    printf("\n2. Which language is used for C programming?\n");
    printf("a) Compiler\nb) Interpreter\nc) Programming Language\nd) Operating System\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'c' || ans == 'C')
        score++;

    // Question 3
    printf("\n3. How many days are there in a week?\n");
    printf("a) 5\nb) 6\nc) 7\nd) 8\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'c' || ans == 'C')
        score++;

    // Question 4
    printf("\n4. Which symbol is used for comments in C?\n");
    printf("a) //\nb) ##\nc) **\nd) &&\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'a' || ans == 'A')
        score++;

    // Question 5
    printf("\n5. Which function is used to take input in C?\n");
    printf("a) printf()\nb) scanf()\nc) gets()\nd) puts()\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'b' || ans == 'B')
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}