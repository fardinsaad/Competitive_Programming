#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
       cin.tie(nullptr);
    int n,m,i,j,k,flag,t;
    cin >> t;
    while(t--)
    {
        flag = 0;
        cin >> n >> m;
        string st[n + 3];
        for(i = 0; i < n; i++) cin >> st[i];
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(st[i][j] == 'W')
                {
                    if(i - 1 >= 0 && st[i - 1][j] == 'B') { flag = 1;  break; }
                    else if(j - 1 < 0 || st[i][j - 1] == 'A') { flag = 1; break; }
                    else if(j + 1 == m || st[i][j + 1] == 'A') { flag = 1; break; }
                    else if(i + 1 == n || st[i + 1][j] == 'A') { flag = 1; break; }
                }
                if(st[i][j] == 'A')
                {
                    if(i - 1 >= 0 && st[i - 1][j] == 'B')
                    {
                        flag = 1;
                        break;
                    }
                }

            }
            if(flag == 1) break;
        }
        if(!flag) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}
