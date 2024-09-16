#include<bits/stdc++.h>
using namespace std;
map<long long,long long>a;
long long int i,j,k,q,num,pid,rid,t;
int main()
{
    // ios_base::sync_with_stdio(0);
    //    cin.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>q;
        while(q--)
        {
            cin>>num;
            if(num == 1)
            {
                cin>>pid>>rid;
                if(a[rid] == 0)
                {
                    a[rid] = pid;
                    cout<<"Y"<<'\n';
                }
               else
                cout<<"N"<<'\n';
            }

            else if(num == 2)
                {
                    cin>>rid;
                    if(a[rid] == 0) cout<<"F"<<'\n';
                    else
                    {
                        cout<<a[rid]<<'\n';
                        a[rid] = 0;
                    }
                }

        }
        a.clear();
    }
    return 0;
}
