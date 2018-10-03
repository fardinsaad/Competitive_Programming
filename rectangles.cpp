#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastread ios_base::sync_with_stdio(0);
ll power[52];

int main()
{
    fastread
    ll a[100][100],rowb[55],roww[55],colb[55],colw[55],b,w,i,j,k,m,n,sum = 0;
    cin >> n >> m;
    power[0] = 1;
    for(i = 1;i <= 52; i++)
    {
        power[i] = power[i - 1] * 2;
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m;j++)
        {
            cin>>a[i][j];
            if(a[i][j])
                rowb[i]++;
            else
                roww[i]++;
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n;j++)
        {
            if(a[j][i])
                colb[i]++;
            else
                colw[i]++;
        }
    }
    for(i = 0; i < n; i++)
    {
        sum += power[rowb[i]] - 1;
        sum += power[roww[i]] - 1;
        //cout <<sum<<endl;
         //cout << rowb[i] << " " <<roww[i] << endl;
    }
    for(i = 0; i < m; i++)
    {
        sum += power[colb[i]] - 1;
        sum += power[colw[i]] - 1;
        //cout << colb[i] << " " <<colw[i] << endl;
    }
    cout << sum - n*m <<endl;

}
