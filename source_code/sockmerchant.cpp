#include<bits/stdc++.h>
using namespace std;
int a[102];

int main()
{
    int n,i,j,k,cnt= 0;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>k;
        a[k]++;
        if(a[k] / 2) { cnt++; a[k] = 0;}
    }
    cout<<cnt;
}
