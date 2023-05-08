#include<stdio.h>
int main(){
    int p, t, r;
    scanf("%d %d %d", &p, &t, &r);
    int res = p*t*r/100;
    printf("%d", res);
}