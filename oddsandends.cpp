#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,m,n;
    cin >> n;
    ll a[n+5];
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(a[0] % 2 != 0 && a[n-1] % 2!= 0 && n%2 != 0)
        cout << "Yes\n";
    else
        cout << "No\n";


}
