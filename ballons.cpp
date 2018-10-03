#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,m,s,flag = 0;
    string st;
    char ch;
    map<char,int>mp;
    cin >> n >>  k;
    cin >> st;
    for(i = 0; i < n; i++)
    {
        mp[st[i]]++;
    }
    for(i = 0; i < n; i++)
    {
        if(mp[st[i]] > k)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        cout << "NO\n";
    }
    else
        cout <<"YES\n";
}
