#include<stdio.h>

int main(){
    int n,i,j,count,m;
    printf("Enter the starting number :");
    scanf("%d",&m);
    printf("Enter a ending :");
    scanf("%d",&n);
    printf("Prime numbers are :\n");
    for(i = m ; i <= n ;i++){
        if(i<2){
            continue;
        }
        count = 0;
        for(j = 1; j <= i; j++){
            if(i %j == 0){
                count++;
            }
        }
        if(count == 2){
            printf("%d\t",i);
        }
    }
    return 0;
}