#include<stdio.h>
int main(){
    char wl[20]="Welcome to my shop";
    char dis[50]="If you buy3000+ you can take a discount";
    int amount;
    printf("%s\n %s\n",wl,dis);
    printf("Enter your amount: \n");
    scanf("%d",&amount);
    if(amount>=3000){
        int count=amount-500;
        printf("You are get 500 Taka Discount\n");
        printf("You have to pay %d:",count);
    }
    else{
        printf("You are not elegable for discount");
    }
    return 0;
}