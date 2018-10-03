#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,j,k,l,m,n,ans = 0;
    cin >> n;
    ll a[n+3];
    for(i = 0; i < n; i++)
    {
        cin >> k;
        a[i] = k;
    }
    sort(a,a+n);
    k = a[n-1];
    if(k<= 25)cout<<0<<endl;
    else
        cout << k - 25 <<endl;
}
