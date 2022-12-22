#include<stdio.h>
int main()
{
    int n,s,temp,c=1;
    scanf("%d",&n);
    s=n*n;
    temp=n;
    while(n!=0)
    {
        c=c*10;
        n=n/10;
    }
    if(s%c==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}