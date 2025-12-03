#include<stdio.h>
int main(){
    //customer info
    int pin=12345;
    int amount=5000;
    char name[30]="Abrar";

    //our system
    int take_pin;
    int take_amount;
    int take_key;
    int take_number;

    //option
    printf("1:Send money\n2:Mobile recharge\n3:Blance check");
    printf("Chose option\n");
    scanf("%d",&take_key);
    return 0;
}