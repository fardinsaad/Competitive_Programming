#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b[70000],a[100005]= { 0 },i,j,k,n,c,m,v,sum = 0,cnt = 0;
    cin>>n;
    v = sqrt(10000005);
    c = 0;
    for(i = 3; i < v; i += 2)
    {
        if(a[i] == 0)
        {
            for(j = i * i ; j < 100005 ; j += i+i) a[j] = 1;
        }
    }
        b[c++] = 2;
        for(i = 3; i < 100005; i += 2){
        {
            if(a[i] == 0) b[c++] = i;
        }
    }
    for( i = 6; i <= n ; i ++)
    {
        cnt = 0;
        m = n;
        for(c = 0; c <= m; c++)
        {
            if(i % b[c] == 0)
            {
                ++cnt;
                m = i / b[c];
               // cout<<n<<","<<m<<"="<<i<<"/"<<b[c]<<'\n';
            }
        }
        if(cnt == 2) { ++sum;}
    }
    cout<<sum;
    main();
}
