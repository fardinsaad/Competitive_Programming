#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,m,n,l,k,d,t,x,y = 0,y1 = 0,flag = 0;
    cin >> n >> t >> k >> d;
    x = n / k;
    if(n % k != 0) x++;
    m = x;
    x = x * t;
    for(i = m; i > 0 ;i--)
    {
        if(y < d)
        {
          y = y + t;
       //   cout << i  << " " << y <<endl;
        }
        else if(y >= d)
        {
            if(i > 1)
            {
                if(i % 2 != 0)i++;
                j = (i / 2);
                y = y + (j * t);
            }
            else
            {
                y1 = d + t;
                y = y + t;
                y = min(y,y1);
            }
            break;
        }
    }
        if(x > y)
        cout << "YES\n";
        else
            cout << "NO\n";


}
