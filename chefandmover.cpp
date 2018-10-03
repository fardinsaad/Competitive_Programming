#include<bits/stdc++.h>
using namespace std;
long long int vis[100005];

int main()
{
    long long int i,j,k,l,m,n,d,t,cnt,sum,avg,flag;
    cin >> t;
    while(t--)
    {
        cin >> n >> d;
        vector<long long int> a;
        //memset(vis,0,sizeof(vis));
        cnt = 0;
        sum = 0;
        flag = 0;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            a.push_back(k);
            sum += k;
        }
        avg = sum / n;
        if(sum % n != 0)
        {
            cout << -1 << "\n";
            continue;
        }
            for(j = 0; j < n - d; j++)
            {
                if(a[j] > avg)
                {
                    cnt = cnt + a[j] - avg;
                    a[j + d] = (a[j]- avg) + a[j+d];
                    a[j] = avg;
                }
                else if(a[j] < avg)
                {
                    cnt = cnt + avg - a[j];
                    a[j+d] = a[j+d] - (avg - a[j]);
                    a[j] = avg;
                }
            }
            for(i = 0; i < n; i++)
            {
                if(a[i] != avg)
                {
                    flag = 1;
                    break;
                }
            }
             if(!flag)
                cout << cnt << "\n";
            else
                cout << -1 <<"\n";

    }
}



