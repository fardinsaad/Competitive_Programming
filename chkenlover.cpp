#include<bits/stdc++.h>
using namespace std;
vector<long long int>a,b;

int main()
{
    long long int i,j,k,l,m,n,t,cnt = 1,temp = 1,x,y,s,w = 0,q,p = 1,f = 1;
    b.push_back(-1);
//    for(i = 1;i <= 20; i++)
//    {
//        temp = temp * i;
//        b.push_back(temp);
//       cout<<b[i] <<endl;
//    }
    cin >> t;
    while(t--)
    {
        cin >> m;
        a.clear();
        w = 0;
        for(i = 1; i <= m; i++)
        {
            cin >> n >> k;
            j = n;
            l = k;
            x = __gcd(l,j);
           // l = (l / x) * p;
            //j = (j / x) * f;
           // p = l;
            //f = j;
            //l = l * i;
            a.push_back(l);
           // cout << "l " << l << " " << "j "<<j <<endl;
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
          //  cout<<11 << w <<endl;
        }
        q = __gcd(w,s);
        cout <<"Case "<<cnt<<": "<< w/q <<"/"<<s/q<<endl;
        cnt++;

    }
}

