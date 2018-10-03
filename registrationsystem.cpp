#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    int n,m,i,j,k,cnt;
    cin >> n;
    string a[n + 2],b[n + 2];
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        if(mp[a[i]] == 0) cout<<"OK"<<endl;
        else if(mp[a[i]] > 0) cout<<a[i]<<mp[a[i]]<<endl;
        mp[a[i]]++;
    }
}
