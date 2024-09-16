#include<bits/stdc++.h>
using namespace std;

#define sz 26
int vis[sz][sz][sz],tim[sz][sz][sz];

struct point
{
    int x;
    int y;
    int z;
};
int X[] = {0, 0, 1, 0, 0, -1};
int Y[] = {0, 1, 0, 0, -1, 0};
int Z[] = {1, 0, 0, -1, 0, 0};


int main()
{
    ios_base::sync_with_stdio(0);
    int i,j,k,l,m,n,t,a,b,c,tc,aa;
    string st1,st2,s1,s2,s3;
    cin >> t;
    for(tc = 1; tc <= t; tc++)
    {
        cin >> st1 >> st2 >> n;
        memset(vis,0,sizeof(vis));
        memset(tim,0,sizeof(tim));
        for(aa = 0; aa < n; aa++)
        {
            cin >> s1 >> s2 >> s3;

            for(i = 0 ; i < s1.size(); i++)
            {
                for(j = 0; j < s2.size(); j++)
                {
                    for(k = 0; k < s3.size(); k++)
                    {
                        vis[s1[i]-'a'][s2[j]-'a'][s3[k]-'a'] = -1;
                    }
                }
            }
        }
        if(vis[st1[0]-'a'][st1[1]-'a'][st1[2]-'a'] == -1)
        {
            cout << "Case "<<tc<<": "<<-1<<"\n";
            continue;
        }
        l = 1;
        point p;
        queue<point>q;
        q.push(point{st1[0]-'a', st1[1]-'a', st1[2]-'a'});
        tim[st1[0]-'a'][st1[1]-'a'][st1[2]-'a'] = 0;
        while(!q.empty())
        {
            p = q.front();
            q.pop();
            if(p.x == st2[0] - 'a' && p.y == st2[1] - 'a' && p.z == st2[2] - 'a')
            {
                l = 0;
                break;
            }
            for(aa = 0; aa < 6; aa++)
            {
                a = (p.x + X[aa]) % 26;
                b = (p.y + Y[aa]) % 26;
                c = (p.z + Z[aa]) % 26;

                if(a < 0)a += 26;
                if(b < 0)b += 26;
                if(c < 0)c+= 26;
                if(vis[a][b][c] == 0)
                {
                    vis[a][b][c] = 1;
                    tim[a][b][c] = tim[p.x][p.y][p.z] + 1;
                    q.push(point{a,b,c});
                }
            }

        }
        if(l == 0)
        {
            cout << "Case "<<tc<<": "<<tim[p.x][p.y][p.z]<<"\n";
        }
        else
            cout  << "Case "<<tc<<": "<<-1<<"\n";

    }
}
