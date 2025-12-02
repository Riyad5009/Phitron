#include<stdio.h>
int main(){
    int number[]={1,2,3,4,5};
    int i;
    int sum=0;
    int size=sizeof(number)/sizeof(number[0]);
    for(i=0;i<size;i++){
        sum=sum+number[i];
    }
    printf("The sum is %d",sum);
    return 0;
}