#include<bits/stdc++.h>
using namespace std;
int a[105],b[105];
char str[103];
int n,k,i,j,len,m = 0,s = 0,flag = 0,bc,wc,sec = 0,sec1 = 0,flag1 = 0,flag2 = 0,cnt =0,again,cnt1 = 0;
int main()
{
    cin>>n>>k;
    int u = n;
    while(u--)
    {
        cin>>str;
        len = strlen(str);
        a[len]++;
        b[s++] = len;
    }
    cin>>str;

    len = strlen(str);
    int t = len;
    a[len]++;
    b[s] = len;
    sort(b,b+n+1);
   // for(i = 0; i < 10; i ++) cout<<a[i]<<" ";
    if(n==1)
    {
        cout<<1<<" "<<1<<'\n';
        return 0;
    }
    for(i = 0; i < s; i++)
    {
        if(b[0] != b[i+1]) { flag = 1; break; }
    }
    if(flag)
    {
        for(i = 0;;i++)
        {
            if(b[i] == t) { break;}
            else
            {
                sec++;
                if(sec == k) { sec1 = sec+5+sec1; sec = 0;flag1 = 1; }
            }
        }
        if(flag1)
        {
            bc = sec1 + 1 + sec;
            flag1 = 0;
        }
        else bc = sec + 1;
        sec1 = 0;
        sec = 0;

        for(i = 0;;i++)
        {
            if(b[i] == t)
            {
                ++cnt;
               // cout<<sec<<" "<<sec1<<" "<<cnt<<" ";
                if(cnt == a[t] - 1) { goto again; }
                  sec++;
                if(sec == k) { sec1 = sec+5+sec1; sec = 0;flag1 = 1; }
            }
             else
            {
                sec++;
                if(sec == k) { sec1 = sec+5+sec1; sec = 0;flag1 = 1; }
            }
        }
        again:
        if(flag1)
        {
            wc = sec1 + 1 + sec;
            flag1 = 0;
        }
        else wc = sec + 1;
        cout<<bc<<" "<<wc<<'\n';
    }

    else if(!flag)
    {
        int koto = a[t];
        for(i = 1; i < koto - 1; i++)
        {
            sec++;
            if(sec == k) { sec1 = sec+5+sec1; sec = 0;flag1 = 1; }
        }
        if(flag1) wc = sec1 + 1 + sec;
        else wc = sec + 1;
        cout<<1<<" "<<wc<<'\n';
    }
}
