#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,a = 0,d = 0;
    char st;
    cin>>n;
    while(n--)
    {
        cin>>st;
        if(st == 'A') a++;
        else if(st == 'D') d++;
    }
    if(a > d) cout<<"Anton"<<endl;
    else if(a < d) cout<<"Danik"<<endl;
    else if(a == d) cout<<"Friendship"<<endl;
}
