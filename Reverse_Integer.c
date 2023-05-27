#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, r, rev=0, neg=0;
    scanf("%d", &n);
    if(n<0){
        neg=1;
        n=abs(n);
    }
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(neg){
        rev=-rev;
    }
    printf("%d", rev);
}
