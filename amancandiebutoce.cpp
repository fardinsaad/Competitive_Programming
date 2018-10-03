#include<bits/stdc++.h>
using namespace std;
int t,n,i,j,k,cnt;
long long int m,a[100000],sum;
int main()
{
    cin>>t;
    while(t--)
    {
        sum = 0;
        int flag = 0;
        cnt = 0;
        cin>>n>>m;
        for(i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i = n - 1; i >= 0 ; i--)
        {
            sum = sum + a[i];
            cnt++;
            if(sum >= m) {cout<<cnt<<endl; flag = 1;break;}
        }
        if(!flag) cout<<-1<<endl;
    }
}
