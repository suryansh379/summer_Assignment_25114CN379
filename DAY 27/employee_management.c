//WRITE A PROGRAM TO CREATE EMPLOYEE MANAGEMENT SYSTEM
#include<stdio.h>

struct employee{
    int id;
    char name[50];
    float salary;
};

int main(){
    struct employee e[10];
    int n;
    printf("Enter number of employees : ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("STUDENT %d\n", i+1);
        printf("Enter employee id : ");
        scanf("%d", &e[i].id);
        printf("Enter employee name : ");
        scanf("%s", e[i].name);
        printf("Enter employee salary : ");
        scanf("%f", &e[i].salary);
    }

    printf("EMPLOYEE DETAILS :\n");
    for(int i = 0; i < n; i++){
        printf("Employee %d\n", i+1);
        printf("Employee ID : %d\n", e[i].id);
        printf("Employee name : %s\n", e[i].name);
        printf("Employee salary : %f\n", e[i].salary);
    }
    return 0;
}