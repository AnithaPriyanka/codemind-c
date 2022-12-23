#include<stdio.h>
int main()
{
    int l,b,w,c,total,area;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=(l+2*w)*(b+2*w)-(l*b);
    total=c*area;
    printf("%d",total);
}