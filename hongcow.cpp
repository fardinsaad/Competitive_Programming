#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,n,l,sum = 0;
    map<string,int>mp;
    string st;
    char a;
    cin>>st;
    k = st.size();
    vector<string>s;
    for(i = 0; i < k; i++)
    {
        l = st.size();
        a = st[l - 1];
         st.pop_back();
        st.insert(st.begin(),a);
        mp[st]++;
        s.push_back(st);
    }
    n = s.size();
    for(i = 0; i < n; i++)
    {
        if(mp[s[i]] > 1)
        {
            sum = sum + 1;
            mp[s[i]] = 0;
        }
        else if(mp[s[i]] == 1) sum = sum + 1;
    }
    cout<<sum<<endl;

}
