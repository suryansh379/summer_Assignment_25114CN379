//WRITE A PROGRAM TO CREATE BANK ACCOUNT SYSTEM
#include<stdio.h>

struct bank{
    int accNo;
    char name[20];
    float balance;
};

int main(){
    struct bank b[100];
    int n = 0, choice, accNo,found;
    float amount;

    do{
        printf("-------BANK ACCOUNT SYSTEM-------\n");
        printf("1. CREATE ACCOUNT\n");
        printf("2. DISPLAY ALL ACCOUNT\n");
        printf("3. DEPOSIT MONEY\n");
        printf("4. WITHDRAW MONEY\n");
        printf("5. SEARCH ACCOUNT\n");
        printf("6. EXIT\n");

        printf("Enter your choice :");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Enter ACCOUNT NUMBER : ");
                    scanf("%d",&b[n].accNo);

                    printf("Enter ACCOUNT HOLDER NAME :");
                    scanf("%s",b[n].name);

                    printf("Enter INITIAL BALANCE :");
                    scanf("%f",&b[n].balance);

                    n++;

                    printf("ACCOUNT CREATED SUCCESSFULLY !\n");
                    break;

            case 2: if(n==0){
                        printf("NO ACCOUNTS FOUND !\n");
                    }
                    else{
                        printf("-------ACCOUNT DETAILS-------\n");
                        for(int i = 0; i < n; i++){
                            printf("ACCOUNT NUMBER : %d\n",b[i].accNo);
                            printf("NAME : %s\n",b[i].name);
                            printf("BALANCE : %f\n",b[i].balance);
                        }
                    }

                    break;

            case 3: printf("Enter ACCOUNT NUMBER :");
                    scanf("%d",&accNo);

                    found = 0;
                    for(int i = 0; i < n; i++){
                        if(b[i].accNo == accNo){
                            found = 1;

                            printf("ENTER DEPOSIT AMOUNT :\n");
                            scanf("%f",&amount);

                            b[i].balance += amount;

                            printf("DESPOSIT SUCCESSFUL !\n");
                            printf("UPDATED BALANCE : %f\n",b[i].balance);

                            break;
                        }
                    }

                    if(found == 0){
                        printf("ACCOUNT NOT FOUND !\n");
                    }
                    break;

            case 4: printf("Enter ACCOUNT NUMBER : ");
                    scanf("%d",&accNo);

                    found = 0;

                    for(int i = 0; i < n; i++){
                        if(b[i].accNo == accNo){
                            found = 1;
                            printf("Enter withdraw amount : ");
                            scanf("%f",&amount);

                            if(amount > b[i].balance){
                                printf("INSUFFICIENT BALANCE !\n");
                            }
                            else{
                                b[i].balance -= amount;
                                printf("WITHDRAWAL SUCCESSFUL !\n");
                                printf("Remaining balance : %f\n",b[i].balance);
                            }

                            break;
                        }
                    }

                    if(found == 0){
                        printf("ACCOUNT NOT FOUND !\n");
                    }
                    break;

            case 5: printf("Enter ACCOUNT NUMBER :");
                    scanf("%d",&accNo);

                    found = 0;

                    for(int i = 0; i < n; i++){
                        if(b[i].accNo == accNo){
                            found = 1;
                            printf("-------ACCOUNT FOUND-------\n");
                            printf("ACCOUNT NUMBER : %d\n",b[i].accNo);
                            printf("NAME : %s\n",b[i].name);
                            printf("BALANCE : %f\n",b[i].balance);

                            break;
                        }
                    }

                    if(found == 0){
                        printf("ACCOUNT NOT FOUND !\n");
                    }
                    break;

            case 6: printf("THANK YOU FOR USING BANK SYSTEM !\n");
                    break;

            default:printf("INVALID CHOICE !\n");
        }
    }while(choice != 6);
    return 0;
}