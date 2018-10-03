#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n = 1378,i,j,k,p = 1;
    cin >> m;
    while(m > 0)
    {
        if(m % 2 == 1)
        {
            p = (p * n) % 10;
        }
        m = m / 2;
        n = (n * n) % 10;
    }
    cout<<p<<endl;
    main();
}
