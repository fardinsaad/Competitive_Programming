#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    string st;
    int n,i,j,k,l,m,a,g,c,t,q,mx,sum;
    cin>>n>>st;
    for(i = 0; i < n; i++)
        {
            mp[st[i]]++;
        }
    a = mp['A'];
    g = mp['G'];
    c = mp['C'];
    t = mp['T'];
    q = mp['?'];
  //  cout<<a;
    if(a == g && g == c && c == t && q == 0)
        {
            cout << st << endl;
            return 0;
        }
    else if(q > 0 && n % 4 == 0)
    {
        mx = max(a,g);
        mx = max(mx,c);
        mx = max(mx,t);
        sum = 4 *mx -(a+g+t+c);
        if((sum == q) || ((q - sum) % 4 == 0 && q > sum))
        {
            if((q - sum) % 4 == 0)
                mx = n / 4;
                for(i = 0; i < n; i++)
                {
                    if(a != mx && st[i] == '?')
                    {
                        cout<<"A";
                        a++;
                    }
                    else if(g != mx && st[i] == '?')
                    {
                        cout<<"G";
                        g++;
                    }
                      else if(c != mx && st[i] == '?')
                    {
                        cout<<"C";
                        c++;
                    }
                      else if(t != mx && st[i] == '?')
                    {
                        cout<<"T";
                        t++;
                    }
                    else if(st[i] != '?') cout<<st[i];
                }
        }
        else
            cout<<"==="<<endl;
    }
    else cout<<"==="<<endl;


}

