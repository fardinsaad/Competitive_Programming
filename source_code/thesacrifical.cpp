#include<bits/stdc++.h>
using namespace std;
#define root sqrt(3.0)

int main()
{
    int t,i,j,k,l,m,n;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if(n < m)
            swap(n,m);
        double area = root/2.0 * n * n;
        area = max(area , root/2.0 * n * (n/2.0 + m));
        printf("%.3f\n", area);
    }
}
