#include<bits/stdc++.h>
using namespace std;
int t,i,j,k,l1,l2,flag;
char stra[1002],strb[1002];
int a[30],b[30];

int main()
{
    cin>>t;
    while(t--)
    {
        flag = 0;
        for(i = 0; i < 30; i++)
        {
            a[i] = 0;
            b[i] = 0;
        }

        cin>>stra>>strb;
        l1 = strlen(stra);
        l2 = strlen(strb);
        for(i = 0; i < l1; i++)
        {
            k = stra[i] - 97;
            a[k] = 1;
        }
         for(i = 0; i < l2; i++)
        {
            k = strb[i] - 97;
            b[k] = 1;
        }
        for(i = 0; i < 26; i++)
        {
            if(a[i]+b[i] > 1) { cout<<"Yes\n"; flag = 1; break; }
        }
        if(flag == 0) cout<<"No\n";
    }
}
