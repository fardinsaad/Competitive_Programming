#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,l,m,n;
    double t,x,y,avg,total = 0,k;
    vector<double>a;
    cin >> n >> k;
    for(i = 0; i < n ; i++)
    {
        cin >> x;
        total = total + x;
        a.push_back(x);
    }
    for(i = 0; ; i++)
    {
        avg = round(total/a.size());
        if(avg == k) break;
        else
        {
            total = total + k;
            a.push_back(k);
        }
    }
    cout << i <<endl;

}
