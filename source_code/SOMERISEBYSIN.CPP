#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,flag1,flag2,flag3,flag4;
    char a[20];
    cin>>t;
    while(t--)
    {
        flag1 = 0;
        flag2 = 0;
        flag3 = 0;
        flag4 = 0;
        cin>>a;
        k = strlen(a);
        if(k == 8) flag1 = 1;
        else continue;
        if((a[0] > 48 && a[0] < 58) && (a[1] > 48 && a[1] < 58) && (a[0] == a[1])) flag2 = 1;
        else continue;
        if((a[2] > 48 && a[2] < 58) && (a[3] > 48 && a[3] < 58)) flag3 = 1;
        else continue;
        if(a[4] >= 'A' && a[4] <= 'Z') flag3 = 1;
        else continue;
        if((a[5] > 48 && a[5] < 58) && (a[6] > 48 && a[6] < 58) &&(a[7] > 48 && a[7] < 58)) flag4 = 1;
        else continue;
        if(flag1 && flag2 && flag3 && flag4) cout<<a<<endl;

    }
}
