#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,y,z,sum,n1,i;
    scanf("%I64d", &n);
    n1 = n;
    for( i = 1; i<= 4 ; i++)
    {
        n1 = n1 * (n - i);
    }
    x = n1 / 120;
    y = (x * (n - 5)) / 6;
    z = ( y * (n - 6)) / 7;
    sum = x + y + z;
    printf("%I64d\n",sum);
}
