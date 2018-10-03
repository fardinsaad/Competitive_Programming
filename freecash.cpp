#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    int i,j,k,m,r,s = -1;
    string n;
    cin >> m;
    for(i = 0 ; i <= m; i++)
    {
        getline(cin,n);
        mp[n]++;
        s = max(mp[n],s);
    }
    cout<<s<<endl;
}
