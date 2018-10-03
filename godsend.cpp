#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,sum = 0,x = 0,y = 1,flag = 0,odd = 0,even = 0,flag2 = 0,flag3 = 0,flag1 = 0;
    ios_base::sync_with_stdio(0);
    cin >> n;
    vector<long long int>a;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        sum += k;
        a.push_back(k);
        if(k % 2 == 0)
            even++;
        else
            odd++;
    }
    if(sum%2 != 0)
        cout <<"First\n";
    else if(even == n)
        cout <<"Second\n";
    else if(odd == n && odd % 2 == 0)
        cout <<"First\n";
    else
    {
        for(i = 0; i < n; i++)
        {
            if(flag == 0)
            {
                x += a[i];
                //cout << x << " 11" <<endl;
            }
            if(x % 2 != 0 && flag1 == 0)
            {
                flag1 = 1;
               // cout << x << " 21" <<endl;
            }
            else if(flag1 == 1 && flag2 == 0)
            {
                if(x % 2 == 0)
                {
                    y = a[i];
                    flag2 = 1;
                    flag = 1;
                    //cout << x << " "<< y<< endl;
                }
            }
          else if(flag2 == 1)
          {
             y += a[i];
          }
        }
        if(y % 2 == 0)
        {
            cout <<"Second\n";
        }
        else
            cout <<"First\n";
    }
}
