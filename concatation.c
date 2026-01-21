#include<stdio.h>
#include<string.h>
int main(){
    char a[100]="apple";
    char b[100]="orange";
    int len=strlen(a);
    for(int i=0;i<strlen(b);i++)
    {
        len[a]=b[i];
        len++;
    }
    printf("%s",a);
    return 0;
}