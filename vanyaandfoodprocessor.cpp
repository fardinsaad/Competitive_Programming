#include<bits/stdc++.h>
using namespace std;
long long int n,h,sum = 0,sum1,i,j,k,t,x,cnt = 0,y,flag = 0;
vector<int>a;
int main()
{
    cin >> n >> h >> t;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if(sum >= h)
        {
            flag = 1;
            if(sum > h)
           {
                sum = sum - a[i];
                i = i - 1;
           }
            y = sum / t;
            if(y == 0) { y = 1; sum = 0 ;}
            sum = sum % t;
            cnt = cnt + y;
        }
        if(sum < h && i == n - 1)
        {
             y = ceil((double(sum)) / t);
             cnt = cnt + y;
        }
    }
    cout << cnt << endl;

}
