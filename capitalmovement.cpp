#include<bits/stdc++.h>
using namespace std;
vector<int>a[60000];
vector<pair<int,int>>pp;
vector<int>::iterator low;
int main()
{
    int t,n,m,x,y,i,j,flag;
    cin >> t;

    while(t--)
    {
        cin >> n;
        flag = 0;
        pp.clear();
          for(i = 0; i <=n ;i++)
        {
            a[i].clear();
        }
        for(i = 1; i <= n; i++)
        {
           cin >> m;
           pp.push_back(make_pair(m,i));
        }
        sort(pp.begin(),pp.end());
        reverse(pp.begin(),pp.end());
       /* for(i = 0; i < n; i++)
        {
            cout<< pp[i].first<< " " << pp[i].second <<endl;
        }*/
        for(i = 1;i < n; i++)
        {
             cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(i = 1; i <=n ;i++)
        {
            a[i].push_back(i);
        }
        for(i = 1; i <=n ;i++)
        {
            sort(a[i].begin(),a[i].end());
        }
        for(i = 1; i <=n ; i++)
        {
            for(j = 0; j < n; j++)
            {
                low = lower_bound(a[i].begin(),a[i].end(),pp[j].second);
                if(a[i].size() == (low - a[i].begin()))
                {
                    cout << pp[j].second << " ";
                    flag = 1;
                    break;
                }
                else if(a[i][(low - a[i].begin())] != pp[j].second)
                {
                    cout << pp[j].second << " ";
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                cout << 0 << " ";
            }
            else if(flag) flag = 0;
            if(i == n) cout << endl;
        }
    }
}
