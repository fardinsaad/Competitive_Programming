#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
    int n,i,j,k,m,l;
    map<int,int>mp;
    vector<int>a;
    string st;
    cin>>n>>st;
    for(i = 0; i < n; i++)
    {
       if(st[i] == 'D') { a.push_back(1); mp[1]++;}
       else if(st[i] == 'R') {a.push_back(2); mp[2]++;}
    }
    for(i = 0;;i++)
    {
        if(mp[1] == 0 || mp[2] == 0) break;
        if(i == n) i = 0;
        if(a[i] == 0) continue;
        if(a[i] == 1)
        {
            for(j = i + 1; ;j++)
            {
                if(a[j] == 2) break;
                if(j == n - 1) j = 0;

            }
            a[j] = 0;
            --mp[2];
        }
         else if(a[i] == 2)
        {
             for(j = i + 1; ;j++)
            {
                if(a[j] == 1) break;
                if(j == n - 1) j = 0;
            }
            a[j] = 0;
            --mp[1];
        }
    }
    if(mp[1] > 0) cout<<"D";
    else cout<<"R";
}
