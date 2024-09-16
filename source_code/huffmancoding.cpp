#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,temp,x;
    pair< char, int >pp[10];
    map<char,int>mp;
    map<int,int>mp1;
    vector<int>a,b,st,y;
    char ch;
    cout << "How many letters to compress?\n";
    cin >> l;
    for(i = 0; i < l; i++)
    {
        cin >> pp[i].first >> pp[i].second;
        mp[pp[i].first] = pp[i].second;
        a.push_back(pp[i].second);
        b.push_back(pp[i].second);
    }
    sort(a.begin(),a.end());
    while(l != 1)
    {
        n = a[0];
        m = a[1];
        temp = a[0] + a[1];
        st.push_back(n);
        st.push_back(m);
        st.push_back(temp);
        a.erase(a.begin(),a.begin()+2);
        a.push_back(temp);
        sort(a.begin(),a.end());
        l--;
    }
    for(i = 0 ; i < st.size(); i++)
    {
        mp1[st[i]] = 0;
        mp1[st[i+1]] = 1;
        i = i + 2;
    }
//    for(i = 0; i < st.size(); i++)
//    {
//        cout << st[i] << " " << mp1[st[i]] << " ";
//    }
    cout << endl;
    cout << "Which sequence you wanna know?\n";
    cin >> ch;
    x = mp[ch];
    for(i = 0 ; i < st.size(); i++)
    {
        if(x == st[i])
            break;
    }
    k = mp1[st[i]];
    y.push_back(k);
    if(k == 1)
        i = i + 1;
    else
        i = i + 2;
    for(j = i ; j < st.size() - 1; j+= 3)
    {
       y.push_back(mp1[st[j]]);
    }
    for(i = y.size()- 1; i >= 0; i--)
    {
        cout << y[i];
    }
    cout << endl;


}
