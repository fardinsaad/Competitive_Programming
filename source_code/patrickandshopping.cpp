#include<bits/stdc++.h>
using namespace std;
long long int a[4];
int main()
{
    long long int x,y,z,i,j,k,mx,mn;
    for(i = 0 ; i < 3; i++) cin>>a[i];
    sort(a,a+3);
    if(a[0] + a[1] == a[2] || a[0] + a[1] > a[2]) cout<<a[0]+a[1]+a[2];
    else if(a[0] + a[1] < a[2]) cout<<2*(a[0]+a[1]);
}
