//WRITE A PROGRAM TO CREATE SALARY MANAGEMENT SYSTEM
#include<stdio.h>

int main(){
    int ID;
    char name[50];
    float basic,hra,da,pf,netSalary;
    printf("Enter Employee ID : ");
    scanf("%d",&ID);

    printf("Enter Employee name : ");
    scanf("%s",name);

    printf("Enter basic salary : ");
    scanf("%f",&basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    pf = basic * 0.05;

    netSalary = basic + hra + da - pf;

    printf("---------SALARY DETAILS----------\n");
    printf("EMPLOYEE ID : %d\n",ID);
    printf("EMPLOYEE NAME : %s\n",name);
    printf("BASIC SALARY : %f\n",basic);
    printf("HRA : %f\n",hra);
    printf("DA : %f\n",da);
    printf("PF : %f\n",pf);
    printf("NET SALARY : %f\n",netSalary);
    return 0;
}