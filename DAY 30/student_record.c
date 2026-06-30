//WRITE A PROGRAM TO CREATE STUDENT RECORD SYSTEM USING ARRAYS AND STRINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int roll[100], marks[100];
    char name[100][50];

    int n = 0;
    int choice, found;
    char search[50];

    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("\nEnter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Name: ");
                scanf("%s", name[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;

                printf("Student Added Successfully!\n");
                break;

            case 2:

                if(n == 0)
                {
                    printf("No Records Found!\n");
                }
                else
                {
                    printf("\n------ STUDENT RECORDS ------\n");

                    for(int i = 0; i < n; i++)
                    {
                        printf("\nRoll No : %d\n", roll[i]);
                        printf("Name    : %s\n", name[i]);
                        printf("Marks   : %d\n", marks[i]);
                    }
                }

                break;

            case 3:

                printf("Enter Student Name: ");
                scanf("%s", search);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(strcmp(name[i], search) == 0)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll No : %d\n", roll[i]);
                        printf("Name    : %s\n", name[i]);
                        printf("Marks   : %d\n", marks[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student Not Found!\n");
                }

                break;

            case 4:

                printf("Enter Student Name: ");
                scanf("%s", search);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(strcmp(name[i], search) == 0)
                    {
                        printf("Enter New Marks: ");
                        scanf("%d", &marks[i]);

                        printf("Marks Updated Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student Not Found!\n");
                }

                break;

            case 5:

                printf("Enter Student Name: ");
                scanf("%s", search);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(strcmp(name[i], search) == 0)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            roll[j] = roll[j + 1];
                            marks[j] = marks[j + 1];
                            strcpy(name[j], name[j + 1]);
                        }

                        n--;

                        printf("Student Deleted Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student Not Found!\n");
                }

                break;

            case 6:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}