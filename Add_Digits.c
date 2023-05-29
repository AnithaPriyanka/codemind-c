#include<stdio.h>
int Sum(int n){
    int r, s=0;
    while(n>0){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    return s;
}
int SingleDigit(int n){
    while(n>=10){
        n=Sum(n);
    }
    return n;
}
int main(){
    int n;
    scanf("%d", &n);
    int res;
    res = SingleDigit(n);
    printf("%d", res);
}