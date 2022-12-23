#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int sum=0;
        if(n%i==0)
        {
            int j=1;
            while(j<=i)
            {
                if(i%j==0)
                {
                    sum++;
                }
                j++;
            }
            if(sum!=2)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}