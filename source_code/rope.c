#include <stdio.h>
#include <math.h>
double x[100],y[100];
double border(int i, int j);
int main(){
    int n;
    double r;
    double pi = 2*acos(0.0);
    scanf("%d %lf",&n,&r);
    for(int i = 0;i<n;++i)
        scanf("%lf %lf",&x[i],&y[i]);
    double ans = pi*r+border(n-1,0);
    for(int i = 1;i<n;++i)
        ans += border(i-1,i);
    printf("%.2lf\n",ans);
}
double border(int i, int j)
{
    int p;
    p = sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
    return p;
}

