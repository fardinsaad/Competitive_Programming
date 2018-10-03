#include<bits/stdc++.h>
using namespace std;

map<string,int>mp;
int main()
{
    ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
    int i,j,k,l,m,n,cnt;
    string st;
    cin >> n;
    while(n-- )
    {
        cnt = 0;
        for(i = 1; i <= 8; i++)
        {
            cin >> st;
            mp[st]++;
            if(mp[st] >= 2)
            {
                cnt++;
             //   cout << st << "cnt = " <<cnt <<endl;
            }
        }
        if(cnt >= 2)
            cout << "similar\n";
        else
            cout << "dissimilar\n";
        mp.clear();
    }
}
