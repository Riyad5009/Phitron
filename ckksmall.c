#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter 3 number for small ck:");
    scanf("%d%d%d",&x,&y,&z);
    if(x<y){
        if(x<z){
            printf("X smallest");
        }
        else{
            printf("Z smallest");
        }
    }
    else{
        if(y<z){
            printf("x smallest");
        }
        else{
            printf("z smallest");
        }
    }
    return 0;
}