//WRITE A PROGRAM TO CREATE MARKSHEET GENERATION SYSTEM
#include<stdio.h>

struct student{
    int roll;
    char name[20],grade;
    float m1,m2,m3,m4,m5,total,percentage;
};

int main(){
    struct student s[100];
    int n = 0, choice,roll,found;

    do{
        printf("-------MARKSHEET GENERATION SYSTEM-------\n");
        printf("1. ADD STUDENT\n");
        printf("2. DISPLAY ALL STUDENTS\n");
        printf("3. GENERATE MARKSHEET\n");
        printf("4. EXIT\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Enter roll number : ");
                    scanf("%d", &s[n].roll);

                    printf("Enter name : ");
                    scanf("%s", s[n].name);

                    printf("Enter marks of 5 subjects :\n");
                    scanf("%f%f%f%f%f",&s[n].m1,&s[n].m2,&s[n].m3,&s[n].m4,&s[n].m5);

                    s[n].total = s[n].m1+s[n].m2+s[n].m3+s[n].m4+s[n].m5;
                    s[n].percentage = s[n].total/5;

                    if(s[n].percentage >= 90)
                        s[n].grade = 'A';
                    else if(s[n].percentage >= 75)
                        s[n].grade = 'B';
                    else if(s[n].percentage >= 60)
                        s[n].grade = 'C';
                    else if(s[n].percentage >= 40)
                        s[n].grade = 'D';
                    else
                        s[n].grade = 'F';
                    
                    n++;
                    printf("STUDENT RECORD ADDED SUCCESSFULLY!!\n");
                    break;
            case 2: if(n == 0){
                        printf("NO RECORDS FOUND !\n");
                    }
                    else{
                        printf("-------STUDENT RECORDS-------\n");
                    }

                    for(int i = 0; i < n; i++){
                        printf("ROLL NUMBER : %d\n",s[i].roll);
                        printf("NAME : %s\n",s[i].name);
                        printf("TOTAL : %f\n",s[i].total);
                        printf("PERCENT : %f\n",s[i].percentage);
                        printf("GRADE : %f\n",s[i].grade);
                    }
                    break;
            
            case 3: printf("ENTER ROLL NUMBER : ");
                    scanf("%d",&roll);

                    found = 0;

                    for(int i = 0; i < n; i++){
                        if(s[i].roll == roll){
                            found = 1;
                            printf("-------MARKSHEET-------\n");
                            printf("ROLL NUMBER : %d\n",s[i].roll);
                            printf("NAME : %S\n",s[i].name);
                            printf("SUBJECT 1 : %f\n",s[i].m1);
                            printf("SUBJECT 2 : %f\n",s[i].m2);
                            printf("SUBJECT 3 : %f\n",s[i].m3);
                            printf("SUBJECT 4 : %f\n",s[i].m4);
                            printf("SUBJECT 5 : %f\n",s[i].m5);

                            printf("---------------------------\n");
                            printf("TOTAL : %f\n",s[i].total);
                            printf("PERCENTAGE : %f\n",s[i].percentage);
                            printf("GRADE : %c\n",s[i].grade);

                            if(s[i].grade == 'F')
                                printf("RESULT : FAIL\n");
                            else
                                printf("RESULT : PASS\n");
                        
                            break;
                        }
                    }
                    if(found == 0){
                        printf("STUDENT NOT FOUND !!\n");
                    }
                    break;
            case 4: printf("THANK YOU !!\n");
                    break;
            default:printf("INVALID CHOICE !!\n");
        }
    }while(choice != 4);
    return 0;
}