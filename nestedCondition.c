#include<stdio.h>
int main(){
    int tk;
    printf("How much money i have: ");
    scanf("%d",&tk);
    if(tk>=5000){
        printf("Coxbzar jabo\n");
        if(tk>=10000){
            printf("Sentmartin o jabo\n");
        }
        else{
            printf("fire asbo \n");
        }
    }
    else{
        printf("Kothao jabo na");
    }
}