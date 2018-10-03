#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,str;
    map<char,char>mp;
    cin >> s1 >> s2 >> str;
    for(int i = 0; i < s1.size(); i++)
    {
        mp[s1[i]] = s2[i];
        mp[s1[i] - 32] = s2[i] - 32;
    }
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= '0' and str[i] <= '9')
            cout <<str[i];
        else
            cout<<mp[str[i]];
    }
}
