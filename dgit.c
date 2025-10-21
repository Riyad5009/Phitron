#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x>='0' && x<='9'){
        printf("IT DIGIHT\n");
    }
    else{
        printf("Alpha\n");
        if(x>='a' && x<='z'){
            printf("Small\n");
        }
        else{
            printf("Capital\n");
        }
    }
    return 0;
}