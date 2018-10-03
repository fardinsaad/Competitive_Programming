#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,x=999999,q;
    cin>>n;
    int a[n+2],b[n+2];
    for(i = 0; i <n ; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    if(n %2 == 0) { q = n/2 - 1; printf("%d",a[q]);}
    else { q = n /2 ; printf("%d",a[q]);}
}
