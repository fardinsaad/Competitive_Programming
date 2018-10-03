#include<bits/stdc++.h>
using namespace std;
int ham(string a,string b)
{
    int cnt = 0;
    for(int i = 0; i < a.size();i++)
    {
        if(a[i] != b[i]) cnt++;
    }
    return cnt;
}

int main()
{
    int i,j,k,m,n,x,y,temp = 1e10;
    set<string>st;
    set<string>::iterator it;
    cin >> n >> m;
    string s[n+2];
    for(i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n ; j++)
        {
            if(i == j)continue;
            x = ham(s[i],s[j]);
            if(x < temp)
            {
                temp = x;
                st.insert(s[i]);
                st.insert(s[j]);

            }
        }
    }
    it = st.begin();
    cout << *it <<endl;

}
