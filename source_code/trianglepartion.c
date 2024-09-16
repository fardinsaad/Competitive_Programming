#include<stdio.h>
#include<math.h>
int main()
{
    double ab,bc,ca,r,ad,b;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf",&ab,&ca,&bc,&r);
        b=sqrt(r/(r+1));
        ad=ab*b;
        printf("Case %d: %.10lf\n",i,ad);

    }
}
