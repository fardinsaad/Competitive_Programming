#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k2,k3,k5,k6,i,j,k,n,mn,mx,r,s;
    cin>>k2>>k3>>k5>>k6;
    mn = min(k2,k5);
    mn = min(mn,k6);
    s = mn * 256;
    k2 = k2 - mn;
    mx = min(k2,k3);
    r = mx * 32;
    cout<<r+s;
}
