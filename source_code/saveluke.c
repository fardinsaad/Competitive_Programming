#include<stdio.h>
int main()
{
    double d,l,v1,v2;
    double t,v,s;
    scanf("%lf %lf %lf %lf",&d,&l,&v1,&v2);
    t=(l-d)/(v1+v2);
    printf("%.12lf",t);
    return 0;
}
