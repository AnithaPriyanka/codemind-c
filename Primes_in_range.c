#include<stdio.h>
int isprime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
void primeRange(int st, int en){
    int cnt=0;
    for(int i=st;i<=en;i++){
        if(isprime(i)){
            cnt=cnt+1;
        }
    }
    printf("%d", cnt);
}
int main(){
    int st, en;
    scanf("%d %d", &st, &en);
    primeRange(st, en);
}