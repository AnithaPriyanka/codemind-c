#include<stdio.h>
int main(){
    int n, i=0, r, arr[100];
    scanf("%d", &n);
    while(n>0){
        r = n%10;
        n=n/10;
        if(r>i){
            i=r;
        }
    }
    printf("%d",i);
}
