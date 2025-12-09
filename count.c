#include<stdio.h>
#include<string.h>
int main(){
    char S[1001];
    scanf("%s",S);
    char T[1001];
    scanf("%d",T);
    int lnS=strlen(S);
    int lnT=strlen(T);
    printf("%d %d\n",lnS,lnT);
    printf("%s %s",S,T);
    return 0;
}