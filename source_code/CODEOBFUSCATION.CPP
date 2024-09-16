#include<bits/stdc++.h>
using namespace std;
vector<char>v;
map<char,int>mp;
int main()
{
    int i,j,k,l,m,n,flag = 0;
    string st;
    cin >> st;
    k = st.size();
    for(i = 0; i < k; i++)
    {
        if(mp[st[i]] == 0)
        {
            mp[st[i]]++;
            v.push_back(st[i]);
            //cout << st[i] << " ";
        }
    }
    l = v.size();
  //  for(i = 0; i < l;i++) cout << v[i] << " ";
    if(l == 1 && v[0] != 'a')
    {
        flag = 1;
    }
    else if(l == 1 && v[0] == 'a')
        flag = 0;
    else
    {
        for(i = 0; i < l - 1; i++)
    {
        n = v[i + 1] - v[i];
        if(i == 0 && v[i] != 'a')
        {
            flag = 1;
           // cout << v[i] << " " << 1;
            break;
        }
        else if(n != 1)
        {
            flag = 1;
            break;
        }
    }
    }
    if(flag) cout << "NO" << endl;
    else cout << "YES" << endl;

}
