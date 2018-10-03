#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,k = 0,x,y,z,mx = 9000000000000,temp;
    cin>>n>>x>>y>>z;
    temp = n % 4;
    temp = 4 - temp;
    if(temp == 1)
    {
        k = min(x,z*3);
        k = min(k,y+z);
    }
    else if(temp == 2)
    {
        k = min(y,x*2);
        k = min(k,z*2);
        k = min(k,x*3+z);
    }
    else if(temp == 3)
    {
        k = min(z,x*3);
        k = min(k,x+y);
    }
    cout<<k<<endl;
}
