#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int odd = 0,even = 0,n,i,j,k,x,sum_odd = 0,sum_even = 0,mn = 90000000000;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(x % 2 == 0)
        {
            even++;
            sum_even = sum_even + x;
        }
        else
        {
            odd++;
            mn = min(mn,x);
            sum_odd = sum_odd + x;
        }
    }
        if(odd % 2 != 0)

            cout<<sum_odd+sum_even-mn<<endl;
        else
            cout<<sum_odd + sum_even<<endl;
        main();
}
