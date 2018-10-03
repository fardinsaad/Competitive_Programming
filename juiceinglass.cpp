#include<bits/stdc++.h>
#define pre setprecision(11)
#define pi 2.0*acos(0.0)

using namespace std;
int main()
{
    double t,r1,r2,h,p,x,v,v1,r;
    cin>>t;
    long long int i;
    for( i = 1;i <= t ; i++)
    {
        cin>>r1>>r2>>h>>p;
        x = (r2 * h) / (r1 - r2);
        r = r2 +  ((p*(r1 - r2)) / h );
        v1 = pi / 3;
        v = v1*((r * r * (x + p)) - (r2 * r2 * x));
        printf("Case %lld: %.9lf\n",i,v);
    }
}
