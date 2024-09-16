#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,sum = 0,sum1 = 0,temp,cnt = 0;
    string n;
    vector<long long int>a;
    cin >> k >> n;
    m = n.size();
    for(i = 0; i < m; i++)
    {
        sum += n[i] - '0';
        a.push_back(n[i] - '0');
    }
    if(sum >= k)
    {
        cout << 0 << endl;
    }
    else
    {
        sort(a.begin(),a.end());
        k = k - sum;
        for(i = 0; i < m; i++)
        {
            if(sum1 >= k) break;
            temp = 9 - a[i];
            sum1 = sum1 + temp;
            cnt++;
        }
    cout << cnt << endl;
    }
}
