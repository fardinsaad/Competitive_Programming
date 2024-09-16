#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n;
    vector<long long int>a;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        a.push_back(k);
    }
    long long int mid = 0,y = 1,cn = 0,temp,f1 = 0;
    for(i = 0; i < n - 1; i++)
    {
        if(a[i + 1] < a[i])
            cn++;
    }
    if(cn == n - 1)
    {
       cout << "YES\n";
       return 0;
    }
    for(i = 0; i < n - 1; i++)
    {

        if((a[i + 1] == a[i]) || (i < n - 1 && a[i + 1] > a[i] && a[i + 2] < a[i + 1]))
        {
            if(mid == 0){
                mid = 1;
                //temp = a[i+1];
            }
            else if(mid == 1)
            {
                if(f1)
                {
                    y = 0;
                    break;
                }
            }
        }
        else if(a[i + 1] > a[i])
        {
            if(mid == 1)
            {
                y = 0;
                break;
            }
        }
        else if(a[i + 1] < a[i])
        {
            f1 = 1;
            if(mid == 0)
            {
                y = 0;
                break;
            }
        }
    }
    if(y) cout <<"YES\n";
    else cout << "NO\n";
}
