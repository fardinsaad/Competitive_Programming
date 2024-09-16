#include<bits/stdc++.h>
using namespace std;
vector<long long int>a,b;

int main()
{
    long long int i,j,k,l,m,n,t,cnt = 1,temp = 1,x,y,s,w = 0,q,p = 1,f = 1;
    b.push_back(-1);
    for(i = 1;i <= 20; i++)
    {
        temp = temp * i;
        b.push_back(temp);
       cout<<b[i] <<endl;
    }
    cin >> t;
    while(t--)
    {
        cin >> m;
        a.clear();
        for(i = 1; i <= m; i++)
        {
            cin >> n >> k;
            j = b[n] / b[k];
            if(n - 1 <= 0 || k - 1 <= 0)
            {
                l = 1;
            }
            else
            {
             l = b[n - 1] / b[k - 1];
            }
            x = __gcd(l,j);
            l = (l / x) * p;
            j = (j / x) * f;
            p = l;
            f = j;
            l = l * i;
            a.push_back(l);
            cout << "l " << l << " " << "j "<<j <<endl;
            a.push_back(j);
        }
        s = a[1];
        for(i = 3; i < a.size(); i+=2)
        {
            y = (s * a[i]) / __gcd(s , a[i]);
            s = y;
            //cout << s<<11<<endl;
        }
        for(i = 0; i < a.size(); i+=2)
        {
            w += s * a[i] / a[i+1];
        }
        q = __gcd(w,s);
        cout << w/q <<"/"<<s/q<<endl;

    }
}
