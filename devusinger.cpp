#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],s=0;
    for(int i=0;i<n;i++)cin>>a[i],s+=a[i];
    if(s+10*(n-1)>m)cout<<-1;
    else cout<<(m-s)/5;
}
