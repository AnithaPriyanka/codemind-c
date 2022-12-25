#include<stdio.h>
int main()
{
    int n,r,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(sum!=1&&sum!=4)
    {
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum=sum+(r*r);
            n=n/10;
        }
        n=sum;
    }
    if(sum==1)
    printf("True");
    else
    printf("False");
}