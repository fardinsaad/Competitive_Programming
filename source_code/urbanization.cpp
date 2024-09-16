#include<bits/stdc++.h>
using namespace std;
vector<int>ar;
int main()
{
    double n,n1,n2,i,j,k = 1,m,sum1 = 0,sum2 = 0,x,y,sum;
    cin>>n>>x>>y;
    for(i = 0; i < n; i++)
    {
        cin>>j;
        ar.push_back(j);
    }
    sort(ar.begin(),ar.end());
    reverse(ar.begin(),ar.end());
    n1 = min(x,y);
    n2 = max(x,y);
    for(i = 0; i < n1; i++)
    {
        sum1 = sum1 + ar[i];
    }
    sum1 = double(sum1/n1);

     for(i = n1,k = 1; k <= n2; i++,k++)
    {
        sum2 = sum2 + ar[i];
    }
    sum2 = double(sum2/n2);
    sum = sum1 + sum2;
    cout<<fixed<<setprecision(6)<<sum<<endl;


}
