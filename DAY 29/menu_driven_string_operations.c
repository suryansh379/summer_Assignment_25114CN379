//WRITE A PROGRAM TO CREATE MENU-DRIVEN STRING OPERATIONS SYSTEM
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], temp[100];
    int choice, length, i;
    int palindrome;

    do
    {
        printf("\n===== STRING OPERATIONS SYSTEM =====\n");
        printf("1. Enter String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Reverse String\n");
        printf("5. Check Palindrome\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter String: ");
                scanf(" %[^\n]", str);

                break;

            case 2:

                printf("String = %s\n", str);

                break;

            case 3:

                length = strlen(str);
                printf("Length = %d\n", length);

                break;

            case 4:

                strcpy(temp, str);

                length = strlen(temp);

                for(i = 0; i < length / 2; i++)
                {
                    char ch = temp[i];
                    temp[i] = temp[length - 1 - i];
                    temp[length - 1 - i] = ch;
                }

                printf("Reversed String = %s\n", temp);

                break;

            case 5:

                strcpy(temp, str);

                length = strlen(temp);

                for(i = 0; i < length / 2; i++)
                {
                    char ch = temp[i];
                    temp[i] = temp[length - 1 - i];
                    temp[length - 1 - i] = ch;
                }

                if(strcmp(str, temp) == 0)
                    printf("Palindrome String\n");
                else
                    printf("Not a Palindrome\n");

                break;

            case 6:

                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++)
                {
                    temp[i] = toupper(temp[i]);
                }

                printf("Uppercase = %s\n", temp);

                break;

            case 7:

                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++)
                {
                    temp[i] = tolower(temp[i]);
                }

                printf("Lowercase = %s\n", temp);

                break;

            case 8:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}