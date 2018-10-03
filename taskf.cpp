#include<bits/stdc++.h>
using namespace std;
bool a[1000000005];
int i,j,k,q,n,flag,r;
long long int p;
int main()
{
    scanf("%d",&q);
    for(i = 1; i <= q; i++)
    {
        scanf("%d %lld",&r , &p);
        if(r == 1) a[p]++;
        else if(r == 2)
        {
            if(a[p] > 0) printf("yes\n");
            else printf("no\n");
        }
    }

}
