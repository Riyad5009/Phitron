#include<stdio.h>
int main(){
    int amount;
    printf("Enter a you aount: ");
    scanf("%d",&amount);
    if(amount>=100){
        printf("Ami jal muri khabo");
    }
    else{
        printf("Kichui khabo na");
    }
    return 0;
}