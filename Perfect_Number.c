#include<stdio.h>
int main(){
    int n, i, rem, sum=0;
    scanf("%d", &n);
    for(i=1;i<n;i++){
        rem = n % i;
        if(rem == 0){
            sum = sum + i;
        }
    }
    if(sum == n){
        printf("True");
    }
    else{
        printf("False");
    }
}