#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,n,c,m,t,f,cnt = 1;
    cin>>n>>c;
    long long int a[n];
    for(i = 0; i < n ; i++)
    {
        cin>>a[i];
        if( i > 0)
        {
            if((a[i] - a[i - 1]) <= c) ++cnt;
            else cnt = 1;
        }
    }
    cout<<cnt;
}
