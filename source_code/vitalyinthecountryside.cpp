#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],n,i,j,k;

int main()
{
    cin>>n;
    for(i = 0; i < n; i++) cin>>a[i];
    if(a[n - 1] == 0) {cout<<"UP\n"; return 0;}
    else if(a[n - 1] == 15) {cout<<"DOWN\n"; return 0;}
    else if(n == 1) {cout<<-1<<endl; return 0;}
    else
    {
        if(a[n-1] > a[n - 2]) {cout<<"UP\n"; return 0;}
        else if(a[n-1] < a[n - 2]) {cout<<"DOWN\n"; return 0;}
    }
}
