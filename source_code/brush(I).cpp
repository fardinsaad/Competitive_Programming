#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 1,t,x,n,i;
    unsigned long long int s;
    cin>>t;
    while( t-- )
    {
        s=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if(x>=0)s+=x;
        }
        cout<<"Case "<<cnt<<": "<<s<<'\n';
        cnt++;
    }
    return 0;
}
