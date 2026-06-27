//WRITE A PROGRAM TO CREATE STUDENT RECORD MANAGEMENT SYSTEM 
#include<stdio.h>

struct student{
    int rollNo;
    char name[50];
    float marks;
};

int main(){
    struct student s[5];
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("Student %d\n",i+1);
        printf("Enter roll number : ");
        scanf("%d", &s[i].rollNo);
        printf("Enter name of student : ");
        scanf("%s",s[i].name);
        printf("Enter marks : ");
        scanf("%f", &s[i].marks);
    }

    printf("Student Records :\n");
    for(int i = 0; i < n; i++){
        printf("Roll number : %d\n",s[i].rollNo);
        printf("Name of student : %s\n",s[i].name);
        printf("marks : %f\n",s[i].marks);
    }
    return 0;
}