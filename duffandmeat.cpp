#include<bits/stdc++.h>

int main()
{
    int n,a[101],p[101],price = 105,pricea,priceb;

    scanf("%d",&n);
    int i = 0,j = 0,x;
    long long int sum = 0;

    while(n--)
    {
        scanf("%d %d",&a[i],&p[j]);
        pricea = a[i] * p[j];
        priceb = a[i] * price;
        price = p[j];
        x = std::min(pricea,priceb);
        sum = sum + x;
        i++;
        j++;
    }
}
