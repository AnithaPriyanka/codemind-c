#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int i = (a>b)?a:b;
    while(1){
        if(i%a==0 && i%b==0){
            printf("%d", i);
            break;
        }
        i++;
    }
}