#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll ara[7];
double check(ll x1,ll x2)
{
    double d;
    d = ((double)ara[x1+1] - (double)ara[x2+1]) / ((double)ara[x1] - (double)ara[x2]);
    return d;
}
int main()
{
    double d1,d2,d3,inf = 1.0/0.0;
    ll i,j,k,l;
    for(i = 0; i < 6; i++)
    {
        cin >> ara[i];
    }
    d1 = check(0,2);
    d2 = check(2,4);
    if(d1 == d2) cout << "No\n";
    else
    {
        double aa = ((ara[2] - ara[0])* (ara[2]- ara[0])) + ((ara[3] - ara[1])* (ara[3]- ara[1]));
        double bb = ((ara[4] - ara[2])* (ara[4]- ara[2])) + ((ara[5] - ara[3])* (ara[5]- ara[3]));
        if(aa != bb) cout << "No\n";
        else cout << "Yes\n";
    }


}
