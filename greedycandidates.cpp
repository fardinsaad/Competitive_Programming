#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    long long int i,j,k,l,m,n,t,cnt,tot,com,flag,temp,temp1;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<long long int>a,sal;
        map<long long int,long long int>mp,mp1;
        cnt = 0;
        tot = 0;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            a.push_back(k);
        }
        for(i = 0; i < m; i++)
        {
            cin >> l >> k;
            sal.push_back(l);
            mp[l] = k;
           // mp1[l] = i;
        }
        string str[n+5];
        for(i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        for(i = 0; i < n; i++)
        {
            flag = 0;
            temp = 0;
            temp1 = -1;
            for(j = 0; j < m; j++)
            {
                //cout<<str[i][j] << " "<<mp[sal[j]]<<"\n";
                if(str[i][j] == '1' && mp[sal[j]] > 0)
                {
                    if(sal[j] >= a[i])
                    {
                        if(sal[j] > temp)
                        {
                            temp = sal[j];
                            temp1 = j;
                            flag = 1;
                        }
                    }
                }
            }
            if(flag)
            {
                tot += temp;
                mp1[temp1]++;
                cnt++;
                mp[temp]--;
            }

        }
        cout << cnt << " " << tot << " " << m - mp1.size()<<"\n";
    }
}
