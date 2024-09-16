#include<bits/stdc++.h>
using namespace std;
int a[500000],d[500000],lef[500000],righ[500000];
int main()
{
    int i = 0,j,k,n,a1,a2,mx,s = -1,p,big1 = -1,big2 = -1,l = 0, r = 0, cnt1 = 0,cnt2 = 0,sumleft = 0, sumright = 0,rb = -1,lb = -1;
    cin>>n;
    while(n--)
    {
        cin>>a1>>a2;
        mx = max(a1,a2);
        if(mx == a1) { cnt1++; k = a1 - a2; a[k] = 1; lef[l++] = k;  }
        else { cnt2++; k = a2 - a1; a[k] = 2; righ[r++] = k;}
        d[i] = k;
        i++;
        s = max(s,k);
    }
    if(cnt1 == 0 || cnt2 == 0) cout<<0;
    else if(cnt1 > cnt2)
    {
        for(j = 0 ; j < i; j++)
        {
            if(a[d[j]] == 2)
                {
                    big1 = max(d[j],big1);
                    p = j + 1;
                    break;
                }
        }
        cout<<p;
    }
     else if(cnt2 > cnt1)
    {
        for(j = 0 ; j < i; j++)
        {
            if(a[d[j]] == 1)
                {
                    big2 = max(d[j],big2);
                    p = j + 1;
                    break;
                }
        }
        cout<<p;
    }
    else if(cnt1 == cnt2)
    {
        for(j = 0; j < l; j++)
        {
            lb = max(lb,lef[j]);
            sumleft = sumleft + lef[j];
        }
         for(j = 0; j < r; j++)
        {
            rb = max(rb,righ[j]);
            sumright = sumright + righ[j];
        }
        if(sumleft > sumright)
        {
            for(j = 0; j < i; j++)
            {
                if(d[j] == rb)
                {
                    p = j + 1;
                    break;
                }
            }
            cout<<p;
        }
        else  if(sumleft < sumright)
        {
            for(j = 0; j < i; j++)
            {
                if(d[j] == lb)
                {
                    p = j + 1;
                    break;
                }
            }
            cout<<p;
        }
        if(sumleft == sumright)
        {
            int ros = max(rb,lb);
              for(j = 0; j < i; j++)
            {
                if(d[j] == lb)
                {
                    p = j + 1;
                    break;
                }
            }
            cout<<p;
        }

    }



}
