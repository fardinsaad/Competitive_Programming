#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,flag1 = 0,flag2 = 0;
    cin >> n;
    int cnt0 = 0,cnt1 = 0,temp = 0;
    vector<int>a;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        a.push_back(k);
    }
    for(i = 0; i < n ;i++)
    {
        if(a[i] == 0)
        {
            cnt0++;
            temp = max(cnt1,temp);
            temp = max(cnt0,temp);
            cnt1 = 0;
        }
        else if(a[i] == 1)
        {
            cnt1++;
            temp = max(cnt1,temp);
            temp = max(cnt0,temp);
            cnt0 = 0;

        }

    }
        cout << temp <<endl;
}
