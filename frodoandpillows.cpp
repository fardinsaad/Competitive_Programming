#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k,i,j,t,x,y;
    cin >> n >> m >> k;
    t = m / n;
    x = n * (n + 1);
    x = x / 2;
    if(m % n == 0)
    {
        if(n == 1 || k % 2 == 0)
        {
            cout << t;
        }
        else cout << t + 1;
    }
    else
    {
        cout << t + 1;

    }
}
