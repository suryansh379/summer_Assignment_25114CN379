//WRITE A PROGRAM TO DEVELOP COMPLETE MINI PROJECT USING ARRAYS,STRINGS AND FUNCTIONS
#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX], marks[MAX];
char name[MAX][50];
int n = 0;

// Function Declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateMarks();
void deleteStudent();

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
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
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice != 6);

    return 0;
}

// Add Student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%d", &marks[n]);

    n++;

    printf("Student Added Successfully!\n");
}

// Display Students
void displayStudents()
{
    if(n == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    printf("\n------ STUDENT RECORDS ------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }
}

// Search Student
void searchStudent()
{
    char search[50];
    int found = 0;

    printf("Enter Student Name: ");
    scanf("%s", search);

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
        printf("Student Not Found!\n");
}

// Update Marks
void updateMarks()
{
    char search[50];
    int found = 0;

    printf("Enter Student Name: ");
    scanf("%s", search);

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
        printf("Student Not Found!\n");
}

// Delete Student
void deleteStudent()
{
    char search[50];
    int found = 0;

    printf("Enter Student Name: ");
    scanf("%s", search);

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
        printf("Student Not Found!\n");
}