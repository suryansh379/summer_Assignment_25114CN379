//WRITE A PROGRAM TO CREATE MINI LIBRARY SYSTEM
#include <stdio.h>
#include <string.h>

int main()
{
    int id[100], quantity[100];
    char bookName[100][50], author[100][50];

    int n = 0, choice, searchId, found;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("\nEnter Book ID: ");
                scanf("%d", &id[n]);

                printf("Enter Book Name: ");
                scanf("%s", bookName[n]);

                printf("Enter Author Name: ");
                scanf("%s", author[n]);

                printf("Enter Quantity: ");
                scanf("%d", &quantity[n]);

                n++;

                printf("Book Added Successfully!\n");
                break;

            case 2:

                if(n == 0)
                {
                    printf("No Books Available!\n");
                }
                else
                {
                    printf("\n------ BOOK LIST ------\n");

                    for(int i = 0; i < n; i++)
                    {
                        printf("\nBook ID     : %d\n", id[i]);
                        printf("Book Name   : %s\n", bookName[i]);
                        printf("Author Name : %s\n", author[i]);
                        printf("Quantity    : %d\n", quantity[i]);
                    }
                }

                break;

            case 3:

                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID     : %d\n", id[i]);
                        printf("Book Name   : %s\n", bookName[i]);
                        printf("Author Name : %s\n", author[i]);
                        printf("Quantity    : %d\n", quantity[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book Not Found!\n");
                }

                break;

            case 4:

                printf("Enter Book ID to Issue: ");
                scanf("%d", &searchId);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        found = 1;

                        if(quantity[i] > 0)
                        {
                            quantity[i]--;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book Not Available!\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book Not Found!\n");
                }

                break;

            case 5:

                printf("Enter Book ID to Return: ");
                scanf("%d", &searchId);

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        quantity[i]++;
                        printf("Book Returned Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book Not Found!\n");
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