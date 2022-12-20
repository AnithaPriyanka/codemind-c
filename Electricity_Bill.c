#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    float cost,bill,sur,total;
    if(u<199)
    cost=1.20;
    else if(u>=200&&u<400)
    cost=1.40;
    else if(u>=400&&u<600)
    cost=1.60;
    else if(u>=60&&u<800)
    cost=1.80;
    else if(u>=800)
    cost=2.00;
    bill=cost*u;
    if(u>400)
    {
        sur=bill*15/100;
    }
    total=bill+sur;
    printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
Surcharge: %0.2f
Total Amount: %0.2f",u,cost,bill,sur,total);
}