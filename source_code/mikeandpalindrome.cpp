#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,cnt = 0,s;
    string str;

    cin >> str;
    l = str.size();
    if(l % 2 == 0)
    {
        k = l - 1;
        for(i = 0 ; i < l/2; i++,k--)
        {
            if(str[i] == str[k])
                cnt++;
        }
        if(cnt == l/2 - 1)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    else
    {
          k = l - 1;
        for(i = 0 ; i < l/2; i++,k--)
        {
            if(str[i] == str[k])
                cnt++;
        }
        if(cnt == l/2 - 1 || cnt == l/2)
            cout << "YES\n";
        else cout << "NO\n";

    }
}
