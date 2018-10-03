#include<bits/stdc++.h>
using namespace std;
map < char , int > mp;
int main()
{
    int i,j,k,B,b,u,l,a,s,r,mn1,mn2,mn;
    string st;
    cin >> st;
    for(i = 0; i < st.size() ; i++)
    {
        mp[st[i]]++;
    }
    B = mp['B'];
    u = mp['u'];
    l = mp['l'];
    b = mp['b'];
    a = mp['a'];
    s = mp['s'];
    r = mp['r'];
    mn1 = min(B,l);
    mn1 = min(mn1,s);
    mn1 = min(mn1,r);
    mn1 = min(mn1,b);
    mn2 = min(u,a);
    mn2 = mn2 / 2;
    mn = min(mn1,mn2);
    cout << mn << endl;
}
