#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,a1,b1,k,i,j,n,m,t,t1,n1,m1;
    cin >> k >> a >> b;
    if(a < k && b < k) cout << "-1"<<endl;
    else
    {
        a1 = max(a,b);
        b1 = min(a,b);
        if(b1 >= k)
        {
            n = a1 / k;
            m = b1 / k;
            t = n + m;
            cout << t <<endl;
        }
        else
        {
            n = a1 / k;
            n1 = a1 % k;
            if(n1 == 0) cout << n << endl;
            else cout << -1 << endl;
        }


    }
}
