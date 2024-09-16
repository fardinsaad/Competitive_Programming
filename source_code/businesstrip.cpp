#include<bits/stdc++.h>
using namespace std;
int a[12];
int main()
{
    int n,m,i,j,k = 0;
    cin>>n;
    for(i = 0; i < 12; i++)
    {
        cin>>a[i];
    }
    sort(a,a+12);
    reverse(a,a+12);
      for(i = 0; i < 12; i++)
    {
        k = k + a[i];
        if(k >= n) break;
    }
    if(n == 0)cout<<0<<endl;
    else if(i == 12) cout<<-1<<endl;
    else cout<<i+1<<endl;
}
