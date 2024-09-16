#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>a,b;
map<ll,ll>mp;

int main()
{
    ll i,j,k,m,l,n,d;
    cin >> n;
    for(i = 0 ; i < n ; i++)
    {
        cin >> k;
        //if(k < 0) k = -k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    for(i = n - 1 ; i > 0; i--)
    {
        d = abs(a[i] - a[i - 1]);
//cout << d << " " <<endl;
        b.push_back(d);
        mp[d]++;
    }
    sort(b.begin(),b.end());
    cout << b[0] << " " << mp[b[0]]<<endl;


}
