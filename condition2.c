#include<stdio.h>
int main(){
    int money;
    printf("How much money do you have: ");
    scanf("%d",&money);
    if(money>=300){
        printf("birani khabo");
    }
    else if(money>=200){
        printf("Copy kahbo bro");
    }
    else{
        printf("Na vai khabo na taka poisa nai");
    }
}