#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,m,l;
    scanf("%d",&n);
    m=log10(n)+1;
    q=n;
    int a[m],i,j,c=0;
    i=0;
    while(q!=0)
    {
        int r;
        r=q%10;
        a[i]=r;
        q=q/10;
        i++;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i!=j)
            {
                
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
    }
if(c==0)
printf("Unique Number");
else
printf("Not Unique Number");
}