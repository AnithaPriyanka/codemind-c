#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,q,r,s=0;
    scanf("%d",&n);
    t=log10(n)+1;
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s+pow(r,t);
        q=q/10;
        t--;
    }
    if(s==n)
    printf("True");
    else
    printf("False");
}