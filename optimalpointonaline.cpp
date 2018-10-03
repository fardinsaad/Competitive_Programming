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
    for(i =0;i < n;i++)
    {
          int sum = 0;
        for(j=0;j < n  ; j++)
        {
            sum = sum + abs(a[j] - a[i]);
        }
        b[i] = sum;
    }
    for(i = 0 ; i < n ; i++)
    {
   // printf("%d=%d\n",a[i],b[i]);
     if(x > b[i]) {x = b[i]; q = i;}
    }
    printf("%d",a[q]) ;


}
