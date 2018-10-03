#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,flag = 0,sum = 0,cnt = 0;
    vector<long long int>a;
    cin >> n >> k;
    for(i = 0; i < n; i++)
    {
        cin >> l;
        a.push_back(l);
    }
    for(i = 0; i < n; i++)
    {
        cnt++;
        if(a[i] <= 8)
            sum = sum + a[i];
        else
        {
            sum += 8;
            j = a[i] - 8;
            if(i < n)
                a[i+1] = a[i+1] + j;
        }
        if(sum >= k)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << cnt <<endl;
    else
        cout << -1 << endl;
}
