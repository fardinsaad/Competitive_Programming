#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],i,j,k;
    for(i = 0; i < 3; i++)
        cin>>a[i];
    sort(a,a+3);
    k = a[2] - a[0];
    cout<<k<<endl;
}
