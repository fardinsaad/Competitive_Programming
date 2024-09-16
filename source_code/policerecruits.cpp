#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v,r = -1,c,m,sum = 0,cnt = 0;
    cin>>n;
    while(n--)
    {
       cin>>v;
       if(v > r) sum = sum+v;
       else if(v == r) { sum = sum + v; if(sum < 0) {cnt=cnt+1; sum = 0; }}
    }
    cout<<cnt<<'\n';
}
