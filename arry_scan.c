#include<stdio.h>
int main(){
    int number[5];
    int i;
    int sum=0;
    for(i=0;i<5;i++){
        printf("Enter number %d:",i+1);
        scanf("%d",&number[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+number[i];
    }
    printf("The sum is: %d",sum);
    return 0;
}