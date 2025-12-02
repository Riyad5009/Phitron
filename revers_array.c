#include<stdio.h>
int main(){
    int number[]={1,2,3,4,5};
    int i,j;
    int temp;
    int size=sizeof(number)/sizeof(number[0]);
    for(i=0,j=size-1;i<j;i++,j--){
        temp=number[i];
        number[i]=number[j];
        number[j]=temp;
    }
    printf("The reverse value is:\n");
    for(i=0;i<size;i++){
        printf("%d\n",number[i]);
    }
    return 0;
}