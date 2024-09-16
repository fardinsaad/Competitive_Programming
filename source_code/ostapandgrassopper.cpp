#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,g,t,cnt,x,y;
    string st;
    cin>>n>>k;
    cin>>st;
    for(i = 0; i <st.size(); i++)
    {
        if(st[i] == 'G') x = i + 1;
        else if(st[i] == 'T') y = i + 1;
    }

        t = max(x,y);
        g = min(x,y);
            if((t - g) % k == 0)
            {
                j = (t - g)/k;
                cnt = 1;
                for(i = g + k - 1; cnt <= j; cnt++)
                {
                    if(st[i] == '#') {cout<<"NO"<<endl; return 0;}
                    i = i + k;
                }
                cout<<"YES"<<endl;
                return 0;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }


}

