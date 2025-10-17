#include<stdio.h>
int main(){
    //costomor info
    int main_pin=1111;
    int blance=5000;
    char name[]="Abrar";

    //bank systeam
    int pin;
    int amount;
    char worng_pin[]="Worng pin";
    int minse=blance-amount;

    //atm card insert 
    int crad_insert=1;
    printf("If you inserted your card press 1:");
    scanf("%d",&crad_insert);
    if(crad_insert==1){
        printf("Hello %s\n",name);
        printf("Your blance: %d\n",blance);
    }
    else{
        printf("sorry worng key");
    }

    //1 option
    printf("1.Money widtraw\n");
    int option;

    //widraw systeam
    scanf("%d",&option);
    if(option==1){
        printf("Enter amount:");
        scanf("%d",&amount);
        printf("Enter pin:");
        scanf("%d",&pin);
        if(main_pin==pin){
            printf("widraw done\n");
            printf("Your widraw amunt: %d\n",amount);
            printf("Your blnance now: %d\n",minse);
            
        }
        else{
            printf("%s",worng_pin);
        }

    }
    else{
        printf("Worng key");
    }
    return 0;
}