#include<stdio.h>

int main()
{
    int t,i;
    double x,y,pi,r;
    pi=2*acos(0.0);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        x=1;
        y=1;
        scanf("%lf",&r);
        x=pi*r*r;
        y=(4*r*r)-x;
        printf("case %d: %.2lf\n",i,y);

    }
    return 0;


}
