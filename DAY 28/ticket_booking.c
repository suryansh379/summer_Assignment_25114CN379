//WRITE A PROGRAM TO CREATE TICKET BOOKING SYSTEM
#include <stdio.h>

struct Ticket
{
    int seatNo;
    char name[50];
    int booked;   // 0 = Available, 1 = Booked
};

int main()
{
    struct Ticket t[10];
    int choice, seat, found;

    // Initialize seats
    for(int i = 0; i < 10; i++)
    {
        t[i].seatNo = i + 1;
        t[i].booked = 0;
    }

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Display Booking Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("\nAvailable Seats:\n");

                for(int i = 0; i < 10; i++)
                {
                    if(t[i].booked == 0)
                    {
                        printf("Seat %d\n", t[i].seatNo);
                    }
                }

                break;

            case 2:

                printf("Enter Seat Number (1-10): ");
                scanf("%d", &seat);

                found = 0;

                for(int i = 0; i < 10; i++)
                {
                    if(t[i].seatNo == seat)
                    {
                        found = 1;

                        if(t[i].booked == 0)
                        {
                            printf("Enter Passenger Name: ");
                            scanf("%s", t[i].name);

                            t[i].booked = 1;

                            printf("Ticket Booked Successfully!\n");
                        }
                        else
                        {
                            printf("Seat Already Booked!\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Invalid Seat Number!\n");
                }

                break;

            case 3:

                printf("Enter Seat Number to Cancel: ");
                scanf("%d", &seat);

                found = 0;

                for(int i = 0; i < 10; i++)
                {
                    if(t[i].seatNo == seat)
                    {
                        found = 1;

                        if(t[i].booked == 1)
                        {
                            t[i].booked = 0;

                            printf("Ticket Cancelled Successfully!\n");
                        }
                        else
                        {
                            printf("Seat is Already Available!\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Invalid Seat Number!\n");
                }

                break;

            case 4:

                printf("\n------ BOOKED TICKETS ------\n");

                found = 0;

                for(int i = 0; i < 10; i++)
                {
                    if(t[i].booked == 1)
                    {
                        printf("\nSeat Number : %d\n", t[i].seatNo);
                        printf("Passenger   : %s\n", t[i].name);

                        found = 1;
                    }
                }

                if(found == 0)
                {
                    printf("No Tickets Booked!\n");
                }

                break;

            case 5:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}