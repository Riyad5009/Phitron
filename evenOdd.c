#include<stdio.h>
int main(){
    int num;
    printf("Enter a intiger number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("evean number");
    }
    else{
        printf("Odd number");
    }
}