#include<stdio.h>
#include<math.h>
int main()
{
    int t,d,r;
    double a,b,area,pi=2*acos(0);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&d,&r);
        a=d/2.0;
        b=r/2.0;
        b=sqrt(b*b-a*a);
        a=a+(r-d)/2.0;
        area=pi*a*b;
        printf("%0.3lf\n",area);
    }
    return 0;
}
