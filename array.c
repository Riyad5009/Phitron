#include<stdio.h>
int main(){
    int a[5];
    int i;
    printf("Enter 5 numbers: \n");
    for(i=0;i<5;i++){
        printf("Number %d:",i);
        scanf("%d",&a[i]);
    }
     printf("Entered numbers are:\n");
    //  for(i=0;i<5;i++){
    //     printf("%d",a[i]);
    //  }
    printf("%d",a[i]);
    return 0;
}