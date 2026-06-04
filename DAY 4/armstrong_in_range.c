#include<stdio.h>
#include<math.h>

int main(){
    int start,end,r,sum,num,num1,num2,n,c;
    printf("Enter a starting number :");
    scanf("%d",&start);

    printf("Enter a ending number :");
    scanf("%d",&end);

    printf("Armstrong range between %d and %d :\n",start,end);
    for(n = start; n <= end; n++){
        sum = 0;
        c = 0;
        num = n;
        while(num > 0){
            num = num / 10;
            c = c + 1;
        }

        num1 = n;
        num2 = n;

        while(num1 > 0){
            r = num1 % 10;
            sum = sum + pow(r,c);
            num1 = num1 / 10;
        }

        if(sum == num2){
            printf("%d\n",sum);
        }
    }
    return 0;
}