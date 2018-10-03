#include<bits/stdc++.h>
using namespace std;
vector<int>a,b;
map<int,int>mp;
int main()
{
    long long int i,j,k,l,sum = 0,sum1 = 0,n,m;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin>>m;
        a.push_back(m);
        sum = sum + m;
        mp[m]++;
    }
    if(mp[0] > 0 && mp[0] == n)
    {
          cout<<"NO"<<endl;
    }
    else if(mp[0] > 0 && sum == 0)
    {
          for(i = 0; i < n; i++)
          {
              if(a[i] != 0)b.push_back(i + 1);
          }
          b.push_back(n+1);
          j = n - mp[0];
          cout << "YES" << endl << j << endl;
          if(b[0] > 0)
          {
                for(i = 0; i < j; i++)
                {
                    if(i == 0) cout << 1 <<" " << b[i + 1] - 1<<endl;
                    else cout << b[i] << " " << b[i + 1] - 1<<endl;
                }
          }
          else if(b[0] == 0)
          {
                for(i = 0; i < j; i++)
                {
                    cout << b[i] << " " << b[i + 1] - 1 << endl;
                }
          }
    }
    else if(sum == 0)
    {
            cout << "YES" << endl << n<<endl;
        for(i = 0; i < n; i++)
        {
            cout<<i+1<<" "<<i+1<<endl;
        }
    }
    else
    {
          cout << "YES" << endl << 1 << endl;
          cout<<1<<" "<<n<<endl;
    }
}
