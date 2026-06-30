//WRITE A PROGRAM TO CREATE MINI EMPLOYEE MANAGEMENT SYSTEM
#include <stdio.h>
#include <string.h>

int main()
{
    int id[100], age[100];
    float salary[100];
    char name[100][50], department[100][50];

    int n = 0, choice, searchId, found;

    do
    {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("\nEnter Employee ID: ");
                scanf("%d", &id[n]);

                printf("Enter Employee Name: ");
                scanf("%s", name[n]);

                printf("Enter Department: ");
                scanf("%s", department[n]);

                printf("Enter Age: ");
                scanf("%d", &age[n]);

                printf("Enter Salary: ");
                scanf("%f", &salary[n]);

                n++;

                printf("Employee Added Successfully!\n");
                break;

            case 2:

                if(n == 0)
                {
                    printf("No Employee Records Found!\n");
                }
                else
                {
                    printf("\n------ EMPLOYEE LIST ------\n");

                    for(int i = 0; i < n; i++)
                    {
                        printf("\nEmployee ID : %d\n", id[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Department  : %s\n", department[i]);
                        printf("Age         : %d\n", age[i]);
                        printf("Salary      : %.2f\n", salary[i]);
                    }
                }

                break;

            case 3:

                printf("Enter Employee ID to Search: ");
                scanf("%d", &searchId);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID : %d\n", id[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Department  : %s\n", department[i]);
                        printf("Age         : %d\n", age[i]);
                        printf("Salary      : %.2f\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee Not Found!\n");
                }

                break;

            case 4:

                printf("Enter Employee ID: ");
                scanf("%d", &searchId);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        printf("Enter New Salary: ");
                        scanf("%f", &salary[i]);

                        printf("Salary Updated Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee Not Found!\n");
                }

                break;

            case 5:

                printf("Enter Employee ID to Delete: ");
                scanf("%d", &searchId);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            id[j] = id[j + 1];
                            age[j] = age[j + 1];
                            salary[j] = salary[j + 1];

                            strcpy(name[j], name[j + 1]);
                            strcpy(department[j], department[j + 1]);
                        }

                        n--;

                        printf("Employee Deleted Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee Not Found!\n");
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