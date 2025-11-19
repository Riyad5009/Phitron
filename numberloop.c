#include<stdio.h>
int main(){
    int i;
    for(i=1;i<30;i++){
       
        if(i==15){
            continue;
        }
         printf("%d\n",i);
    }
    return 0;
}