#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0,k,l,a[10],n,t;
    cin>>t;
    while(t--)
    {
        cin >> n;
        for(i = 0; i < n; i++)
            cin >> a[i];
        while(next_permutation(a,a+n))
        {
            j++;
            cout << j << " : ";
            for(i =0 ; i< n;i++)cout<<a[i]<<" ";
            if(j == n)
            {
               // cout<<endl;
                //for(i =0 ; i< n;i++)cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;


    }
}
