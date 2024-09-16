#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0,a[10005],i,j,k,n,m;
    cin>>n>>m>>k;
    for(i = 0;i <=m; i++) cin>>a[i];
    for(i = 0;i <m; i++)
    {
        if(__builtin_popcount(a[m]^a[i])<=k ) x++;
    }
    cout<<x;
}
