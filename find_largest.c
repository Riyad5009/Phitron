#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
             printf("largest=a %d",a);
 }
 else{
    printf("largest=c %d",c);
 }
}
else{
    if(b>c){
        printf("largest=b %d",b);
    }
    else{
        printf("largest=%d",c);
    }
}
    return 0;
}