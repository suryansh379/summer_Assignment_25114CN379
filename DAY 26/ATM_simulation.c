//WRITE A PROGRAM TO CREATE ATM SIMULATION
#include<stdio.h>

int main(){
    int choice;
    float balance = 1000000.0,amount;

    do{
        printf("-----ATM MENU-----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Current balance : %f\n",balance);
                    break;
            
            case 2: printf("Enter amount to deposit : ");
                    scanf("%f",&amount);

                    if(amount > 0){
                        balance += amount;
                        printf("DEPOSIT SUCCESSFUL !\n");
                        printf("UPDATED BALANCE = %f\n",balance);
                    }
                    else{
                        printf("INVALID AMOUNT !!\n");
                    }
                    break;
            
            case 3: printf("Enter amount to withdraw : ");
                    scanf("%f",&amount);

                    if(amount <= 0){
                        printf("INVALID AMOUNT !!\n");
                    }
                    else if(amount > balance){
                        printf("INSUFFICIENT BALANCE !!\n");
                    }
                    else{
                        balance -= amount;
                        printf("WITHDRAWAL SUCCESSFUL !!\n");
                        printf("REMAINING BALANCE = %f\n",balance);
                    }
                    break;
            
            case 4: printf("Thankyou for using the ATM !!\n");
                    break;

            default: printf("INVALID CHOICE !!");
        }
    }while(choice != 4);
    return 0;
}