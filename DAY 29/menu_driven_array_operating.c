//WRITE A PROGRAM TO CREATE MENU-DRIVEN ARRAY OPERATIONS SYSTEM
#include <stdio.h>

int main()
{
    int a[100], n = 0;
    int choice, i, max, min, sum, key, found;
    float avg;

    do
    {
        printf("\n===== ARRAY OPERATIONS SYSTEM =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Find Sum\n");
        printf("6. Find Average\n");
        printf("7. Search Element\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);

                for(i = 0; i < n; i++)
                {
                    scanf("%d", &a[i]);
                }

                break;

            case 2:

                if(n == 0)
                {
                    printf("Array is Empty!\n");
                }
                else
                {
                    printf("Array Elements:\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%d ", a[i]);
                    }

                    printf("\n");
                }

                break;

            case 3:

                max = a[0];

                for(i = 1; i < n; i++)
                {
                    if(a[i] > max)
                    {
                        max = a[i];
                    }
                }

                printf("Maximum Element = %d\n", max);

                break;

            case 4:

                min = a[0];

                for(i = 1; i < n; i++)
                {
                    if(a[i] < min)
                    {
                        min = a[i];
                    }
                }

                printf("Minimum Element = %d\n", min);

                break;

            case 5:

                sum = 0;

                for(i = 0; i < n; i++)
                {
                    sum += a[i];
                }

                printf("Sum = %d\n", sum);

                break;

            case 6:

                sum = 0;

                for(i = 0; i < n; i++)
                {
                    sum += a[i];
                }

                avg = (float)sum / n;

                printf("Average = %.2f\n", avg);

                break;

            case 7:

                printf("Enter element to search: ");
                scanf("%d", &key);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(a[i] == key)
                    {
                        printf("Element found at index %d\n", i);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Element Not Found!\n");
                }

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