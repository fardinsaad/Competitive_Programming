#include<bits/stdc++.h>
using namespace std;
vector<long long int>a;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    long long int n,m,i,j,k,t,cnt,rem,r;
    cin >> t;
    for(j = 1; j <= t; j++)
    {
        cnt = 0;
        a.clear();
        cin >> n;
        for(r = 0; r < n; r++)
        {
            cin >> m;
            a.push_back(m);
            if(m >= 50)cnt++;
        }
        sort(a.begin(),a.end());
        rem = n - cnt;
        for(i = n - cnt - 1; rem > 0 ; i--)
        {
            k = ceil(((double)50 / a[i]));
            rem = rem - k;
            if(rem >= 0)
            {
                cnt++;
            }
        }
        cout << "Case #"<<j<<":"<<" "<<cnt<<endl;
    }

}
