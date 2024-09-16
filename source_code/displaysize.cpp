#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,m,x,mn = 1e9,r,c;
    cin >> x;
    for(i = 1; i <= x; i++)
    {
        if(x % i == 0)
        {
            n = x / i;
            m = abs(n - i);
            if(mn > m)
            {
                mn = m;
                if(n > i) r = i,c = n;
                else r = n,c = i;
            }
        }
    }
    cout<<r<<" "<<c;
  //  main();

}
