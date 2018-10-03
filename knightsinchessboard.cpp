#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n,x,temp,i,j,k;
    cin>>t;
    for(i = 1; i <= t; i++)
    {
        cin>>m>>n;
        temp = m * n;
        if(m == 1 || n == 1) k = temp;
        else if(m == 2 || n == 2)
        {
            x = max(m,n);
            if(x % 4 == 1) x += 1;
            else if(x % 4 == 2) x+= 2;
            else if(x % 4 == 3) x += 1;
            else if(x % 4 == 0) x += 0;
            k = x;
        }
        else if(temp % 2 == 0) k = temp / 2;
        else k = (temp/2) + 1;
        cout<<"Case"<<" "<<i<<":"<<" "<<k<<'\n';
    }
}
