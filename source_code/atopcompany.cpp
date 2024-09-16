#include<bits/stdc++.h>
using namespace std;

int vis[26][26][26],cnt1,n,tim[26][26][26],aa,bb,cc,t;
string a,b,x,y,z;
void dfs(int ch1,int ch2,int ch3)
{
   if(b[0]-'a' == ch1 && b[1]-'a' == ch2 && b[2]-'a' == ch3)
   {
       cnt1 = min(cnt1,tim[ch1][ch2][ch3]);
       cout << ch1 << " " <<ch2 << " "<<ch3<< " " <<tim[ch1][ch2][ch3]<<endl;

   }
   if(vis[ch1][ch2][ch3] == 1)return;
   if(vis[ch1][ch2][ch3] == -1)return;
   if(vis[ch1][ch2][ch3] == 0)
   {
       vis[ch1][ch2][ch3] = 1;
        t = t + 1;
        tim[ch1][ch2][ch3] = t;
     //   cout<<"#1"<<" "<< ch1 << " "<<ch2 << " "<<ch3<<" "<<tim[ch1][ch2][ch3]<<" "<<t<< endl;

   }
    if(ch1+1 >= 26)
     dfs((ch1+1)%26,ch2,ch3);
    else
        dfs(ch1+1,ch2,ch3);
    if(ch2+1 >= 26)
     dfs(ch1,(ch2+1)%26,ch3);
    else
        dfs(ch1,ch2+1,ch3);
    if(ch3+1 >= 26)
     dfs(ch1,ch2,(ch3+1)%26);
    else
        dfs(ch1,ch2,ch3+1);
    if(ch1-1 < 0)
        dfs(ch1-1+26,ch2,ch3);
    else
        dfs(ch1-1,ch2,ch3);
    if(ch2-1 < 0)
        dfs(ch1,ch2-1+26,ch3);
    else
        dfs(ch1,ch2-1,ch3);
    if(ch3-1 < 0)
        dfs(ch1,ch2,ch3-1+26);
    else
        dfs(ch1,ch2,ch3-1);

}

int main()
{
    int i,j,k,l,m = 1,tc,s;
    cin >> tc;
    while(tc--)
    {
        cout << endl;
        memset(vis,0,sizeof(vis));
        memset(tim,0,sizeof(tim));
        cnt1 = 1e10;

        cin >> a >> b >> n;
        for(s = 0; s < n; s++)
        {
            cin >> x >> y >> z;
            for(i = 0; i < x.size(); i++)
            {
                for(j = 0; j < y.size(); j++)
                {
                    for(k = 0 ; k < z.size(); k++)
                    {
                        vis[x[i] - 'a'][y[j] - 'a'][z[k] - 'a'] = -1;
                    }
                }
            }
        }
        if(vis[a[0] - 'a'][a[1] - 'a'][a[2] - 'a'] == -1)
        {
            cout<<"Case "<<m<<": "<<"-1"<<endl;
            m++;
            continue;
        }
        t = -1;
        aa = a[0] - 'a';
        bb = a[1] - 'a';
        cc = a[2] - 'a';
        dfs(aa,bb,cc);
        cout<< "Case "<<m<<": "<< cnt1<<endl;
        m++;
    }
}
