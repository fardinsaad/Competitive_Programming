#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int>a;
        int temp = -1,x = 0,flag = 1,d = 0,cnt = 0;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            a.push_back(k);
            if(i > 0)
            {
                d = abs(a[i - 1] - k);
            }
           if(d > 1)
            {
                flag = 0;
            }
            if(k == 7 && temp == -1)
            {
                x = i;
                temp = 1;
            }
            if(k == 7)
                cnt++;
            if(k > 7)
                flag = 0;
        }
        if(flag == 0)
        {
            goto pro;
        }
        for(i = x - 1,j = x + cnt;  ; i--,j++)
        {
            if(i < 0 || j == n)
            {
                if(i < 0 && j != n)
                {
                    flag = 0;

                }
                else if(i != -1 && j == n)
                {
                    flag = 0;
                }
                break;
            }
            if(a[i] != a[j])
            {
                flag = 0;
                break;
            }
        }
pro:
        if(flag) cout << "yes\n";
        else cout << "no\n";
    }
}
