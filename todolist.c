#include<stdio.h>
int main(){
    int user_number=1234;
    int user_pin=1234;
    int number;
    int pin;
    //customer info
    char name[]="Abrar";
    char job[]="Software engineer";
    int age=18;
    
    printf("Enter number: \n");
    scanf("%d",&number);
    printf("Enter pin");
    scanf("%d",&pin);
    if(user_number==number && user_pin==pin){
        printf("Login sucsesfull");
        printf("press 1 for go to info:");
        int key;
        scanf("%d",&key);
        if(key==1){
            printf("Name: %s\nJob role: %s\nAge: %d",name,job,age);
        }
    }
    else{
        printf("Get lost!");
    }
    return 0;
}