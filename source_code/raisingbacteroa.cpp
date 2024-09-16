#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,temp,x,i,j,k,cnt = 0;
    cin>>n;
    while( n != 0)
    {
        temp = n % 2;
        cnt = cnt+temp;
        n= n/2;
    }
    cout<<cnt<<'\n';
    //main();
}
