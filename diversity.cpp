#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastread ios_base::sync_with_stdio(0);
int main()
{
    fastread
    ll i,j,k,l,m,n;
    string str;
    cin >> str;
    cin >> n;
    if(str.size() < n)
        cout <<"impossible\n";
    else
    {
        map<char,ll>mp;
        for(i = 0; i < str.size();i++)
        {
            mp[str[i]]++;
        }
        k = n - mp.size();
        if(k < 0) k = 0;
        cout << k << endl;
    }

}
