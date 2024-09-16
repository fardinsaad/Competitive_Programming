#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n,cnt = 0,a,j = 1,b = 2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for( i = 1; i <=n ; i++)
        {
            cin>>a;
            cnt += (a - b) / 5;
            if( (a - b) % 5 > 0) cnt += 1;
            b = a;
        }
        cout<<"Case "<<j++<<": "<<cnt<<'\n';
        cnt = 0;
        b = 2;
    }
}
