#include<stdio.h>
int isPrime(int n){
    int i, fc=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            fc=fc+1;
        }
    }
    return fc==2;
}
int prePrime(int n){
    while(isPrime(n)==0){
        n--;
    }
    return n;
}
int postPrime(int n){
    while(isPrime(n)==0){
        n++;
    }
    return n;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a, b;
        a=prePrime(n);
        b=postPrime(n);
        if((n-a)<=(b-n))
        printf("%d
", a);
        else
        printf("%d
", b);
    }
}