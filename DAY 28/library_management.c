//WRITE A PROGRAM TO CREATE LIBRARY MANAGEMENT SYSTEM
#include<stdio.h>

struct book{
    int id,quantity;
    char name[20],author[20];
};

int main(){
    struct  book b[100];
    int n = 0, choice, id, found;

    do{
        printf("-------LIBRARY MANAGEMENT SYSTEM-------\n");
        printf("1. ADD BOOK\n");
        printf("2. DISPLAY BOOKS\n");
        printf("3. SEARCH BOOK\n");
        printf("4. ISSUE BOOK\n");
        printf("5. RETURN BOOK\n");
        printf("6. EXIT\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Enter BOOK ID :");
                    scanf("%d", &b[n].id);
                    
                    printf("Enter BOOK NAME :");
                    scanf("%s", b[n].name);

                    printf("Enter BOOK AUTHOR :");
                    scanf("%s", b[n].author);

                    printf("Enter QUANTITY :");
                    scanf("%d", &b[n].quantity);

                    n++;

                    printf("BOOK ADDED SUCCESSFULLY !\n");
                    break;

            case 2: if(n == 0){
                        printf("NO BOOKS AVAILABLE !\n");
                    }
                    else{
                        printf("-------BOOK LIST-------\n");
                        for(int i = 0; i < n; i++){
                            printf("BOOK ID : %d\n",b[i].id);
                            printf("BOOK NAME : %s\n",b[i].name);
                            printf("BOOK AUTHOR : %s\n",b[i].author);
                            printf("BOOK QUANTITY : %d\n",b[i].quantity);
                        }
                    }
                    break;

            case 3: printf("Enter BOOK ID :");
                    scanf("%d",&id);

                    found = 0;

                    for(int i = 0; i < n; i++){
                        if(b[i].id == id){
                            found = 1;

                            printf("-----BOOK FOUND!-----\n");
                            printf("BOOK ID : %d\n",b[i].id);
                            printf("BOOK NAME : %s\n",b[i].name);
                            printf("BOOK AUTHOR : %s\n",b[i].author);
                            printf("BOOK QUANTITY : %d\n",b[i].quantity);
                            break;
                        }
                    }

                    if(found == 0)
                        printf("BOOK NOT FOUND !\n");
                    
                    break;

            case 4: printf("Enter BOOK ID to issue :");
                    scanf("%d",&id);

                    found = 0;

                    for(int i = 0; i < n; i++){
                        if(b[i].id == id){
                            found = 1;
                            if(b[i].quantity > 0){
                                b[i].quantity--;
                                printf("BOOK ISSUED SUCCESSFULLY!\n");
                            }
                            else{
                                printf("BOOK NOT AVAILABLE !\n");
                            }
                            break;
                        }
                    }

                    if(found == 0)
                        printf("BOOK NOT FOUND !\n");

                    break;

            case 5: printf("Enter BOOK ID to return :");
                    scanf("%d",&id);

                    found = 0;

                    for(int i = 0; i < n; i++){
                        if(b[i].id == id){
                            found = 1;
                            b[i].quantity++;
                            printf("BOOK RETURNED SUCCESSFULLY !\n");
                            break;
                        }
                    }

                    if(found == 0)
                        printf("BOOK NOT FOUND !\n");

                    break;

            case 6: printf("THANK YOU !\n");
                    break;

            default:printf("INVALID CHOICE !\n");
        }
    }while(choice != 6);
    return 0;
}