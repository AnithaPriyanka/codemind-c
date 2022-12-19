#include<stdio.h>
int main()
{
    int n,b,i,c;
    scanf("%d%d",&n,&b);
    for(i=1;i<=b;i++)
    {
        c=n*i;
        printf("%d x %d = %d
",n,i,c);
    }
}