#include<stdio.h>
int main()
{
    int a,b,n,r,rev=0,temp;
    scanf("%d%d",&a,&b);
    for(n=a;n<=b;n++)
    {
        temp=n;
        rev=0;
        while(temp)
        {
            r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        if(n==rev)
        printf("%d ",n);
    }
    
}