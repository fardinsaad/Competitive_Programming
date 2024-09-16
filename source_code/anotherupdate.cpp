#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << 11<<endl;
    long long int i,ii,j,k,l,n,t,r,d,q,x,qn,p;
    cin >> t;
    for(j = 1; j <= t; j++)
    {
        vector<long long int>a;
        a.push_back(-1);
        cin >> n >> q;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            a.push_back(k);
        }
        long long int tot = 0,m,f;
        for(ii = 0 ; ii < q; ii++)
        {
            cin >> qn >> l >> r >> d;
            for(i = l,p = 1 ; i <= r; i++,p++)
            {
                if(i == l) m = a[i];
                else
                {
                    m = ((1 + p * d) * a[i]);
                }
                tot = (tot + m);
            }
            if(ii == 0)
                cout << "Case "<<j << ": ";
            cout << tot << endl;

        }

    }
}
