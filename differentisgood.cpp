#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread ios_base::sync_with_stdio(0);

int main()
{
    fastread
    ll n,i,j,k;
    map<char,ll>mp;
    cin >> n;
    string str;
    cin >> str;
    if(n > 26) cout << -1 << endl;
    else
    {
        for(i = 0; i < n ; i++)
        {
            mp[str[i]]++;
        }
        cout << n - mp.size() <<endl;
    }
}
