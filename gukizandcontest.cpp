#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
set<int> sp;
set<int>::iterator it;

int main()
{
    int i,j,k,l = 1,m,n;
    vector<int>a,b;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        mp[k]++;
        b.push_back(k);
        if(mp[k] == 1)
         a.push_back(k);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    //for(it = sp.begin() ; it != sp.end() ; ++i)
    for(i = 0; i < a.size(); i++)
    {
        m = mp[a[i]];
        mp[a[i]] = l;
        l += m;

    }
    for(i = 0 ;i < n; i++)
    {
        cout << mp[b[i]] << " ";
    }

}
