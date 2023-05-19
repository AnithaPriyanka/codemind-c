#include<stdio.h>
int main(){
    int n, sum=0, product=1, r;
    scanf("%d", &n);
    while(n!=0){
        r = n%10;
        sum = sum+r;
        product = product*r;
        n = n/10;
        
    }
    printf("%d", product-sum);
}