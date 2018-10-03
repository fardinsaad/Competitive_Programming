#include<bits/stdc++.h>
using namespace std;
map<string,int>mp,mp1,mp2;
int main()
{
    int i,n,m,j,k,l;
    cin >> n;
    string st,str,st1,st2;;
    cin >> st;
    mp[st]++;
    while(n --)
    {
        cin >> str;
        for(i = 0; i < 8; i++)
        {
            if(i < 3)
                st1 = st1 + str[i];
            else if(i >= 5)
                st2 = st2 + str[i];
        }
        mp1[st1]++;
        mp2[st2]++;
        str.clear();
        st1.clear();
        st2.clear();
    }
    if(mp1[st] == mp2[st]) cout << "home" <<endl;
    else cout << "contest" <<endl;

}
