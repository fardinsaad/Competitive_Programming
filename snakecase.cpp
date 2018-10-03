#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
    string st;
    cin>>st;
    for(int i = 0; i < st.size(); i++)
    {
        if(st[i] == '_')mp[st[i]]++;
    }
    cout<<mp['_']+1<<endl;
}
