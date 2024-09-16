#include<bits/stdc++.h>
using namespace std;
int a[105],s[105],x,y;
int main()
{
    int i,j,k = 0,n,m,sum = 0;
    cin >> n >> m;
    for(i = 0; i < n; i++)
        cin >> a[i];
    for(i = 0; i < m; i++)
    {
        cin >> x >> y;
        for(j = x - 1 ; j < y ; j++)
        {
            sum = sum + a[j];
        }
        s[i] = sum;
        sum = 0;
    }
    for(i = 0; i < m; i++)
    {
        if(s[i] > 0) k = k + s[i];
    }
    cout<< k << endl;
    main();

}
