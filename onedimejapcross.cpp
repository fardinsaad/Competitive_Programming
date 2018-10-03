#include<bits/stdc++.h>
using namespace std;
int a[1003];
char str[102];
int n,i,j = 0,k,cnt = 0,cblack = 0,flag = 0,flag2 = 0;
int main()
{


    cin>>n;
    cin>>str;
    k = strlen(str);
    for(i = 0; i < k; i++)
    {
        if(str[i] == 'B')
        {
            cblack++;
            flag = 1;
        }
        else if(str[i] == 'W')
        {
            if(cblack > 0)
            {
                a[j++] = cblack;
                cblack = 0;
                cnt++;
            }
        }
    }
    if(cblack > 0)
    {
        cnt++;
        a[j] = cblack;
        flag2 = 1;
    }
    cout<<cnt<<'\n';
    if(flag && flag2)
    {
        for(i = 0; i <= j; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else if(flag && !flag2)
        {
        for(i = 0; i < j; i++)
        {
            cout<<a[i]<<" ";
        }
    }
}
