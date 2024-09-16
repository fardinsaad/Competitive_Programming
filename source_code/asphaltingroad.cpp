#include<bits/stdc++.h>
using namespace std;
bool c[9000],r[9000];
int a[900000];
int main()
{
    int i,j,k,n,x,y,m,t;
    cin >> n;
    for(i = 0; i < n*n*2; i++)
    {
        cin >> a[i];
        if(i % 2 ==0) r[a[i]] = 1;
        else c[a[i]] = 1;
    }
    for(j=0,i = 0,t = 1; j < n*n; t++,i = i + 2,j++)
    {
        if(r[a[i]] == 1 && c[a[i + 1]] == 1){r[a[i]] = 0 ; c[a[i+1]] = 0 ; cout<<t<<" "; }
       // cout<<11<<" ";
    }

}
