#include<bits/stdc++.h>
using namespace std;

vector<int>a,b,c,d,e;
struct rip{
    int p,q,r;
};
vector<rip>v;
bool flag;

bool csp1(int xx[],int yy[],int ww)
{
    for(i = 0; i < xx.size(); i++)
    {
        for(j = 0; j < yy.size(); j++)
        {
            if()
        }
    }
}
bool csp2(int xx,int yy,int ww)
{

}
bool csp3(int xx,int yy,int ww)
{

}
bool csp4(int xx,int yy,int ww)
{

}
int main()
{
    int i,j,k,l,m,n,x,y,z,w;
    for(i = 1 ; i <= 4; i++)
    {
        a.push_back(i);
        b.push_back(i);
        c.push_back(i);
        d.push_back(i);
        e.push_back(i);
    }
    for(i = 0; i < 10; i++)
    {
        cin>>x>>y>>z;
        v.push_back({x,y,z});
    }
//    for(i = 0; i < 4; i++)
//        cout << a[i] << " ";
        while(1)
        {
            for(i = 1; i < v.size(); i++)
            {
                m = v[i].p;
                n = v[i].q;
                w = v[i].r;
                if(m == 1 && n == 4)
                {
                    if(w == 1)
                        flag = csp1(a,d,w);
                    else if(w == 2)
                        flag = csp2(a,d,w);
                    else if(w == 3)
                        flag = csp3(a,d,w);
                    else if(w == 4)
                        flag = csp4(a,d,w);
                }
                else  if(m == 4 && n == 4)
                {
                    if(w == 1)
                        flag = csp1(a,d,w);
                    else if(w == 2)
                        flag = csp2(a,d,w);
                    else if(w == 3)
                        flag = csp3(a,d,w);
                    else if(w == 4)
                        flag = csp4(a,d,w);
                }
                else if(m == 1 && n == 2)
                {
                    if(w == 1)
                        flag = csp1(a,b,w);
                    else if(w == 2)
                        flag = csp2(a,b,w);
                    else if(w == 3)
                        flag = csp3(a,b,w);
                    else if(w == 4)
                        flag = csp4(a,b,w);

                }
                else if(m == 1 && n == 5)
                {
                    if(w == 1)
                        flag = csp1(a,e,w);
                    else if(w == 2)
                        flag = csp2(a,e,w);
                    else if(w == 3)
                        flag = csp3(a,e,w);
                    else if(w == 4)
                        flag = csp4(a,e,w);

                }
                else if(m == 2 && n == 5)
                {
                    if(w == 1)
                        flag = csp1(b,e,w);
                    else if(w == 2)
                        flag = csp2(b,e,w);
                    else if(w == 3)
                        flag = csp3(b,e,w);
                    else if(w == 4)
                        flag = csp4(b,e,w);

                }
                else if(m == 5 && n == 2)
                {
                    if(w == 1)
                        flag = csp1(e,b,w);
                    else if(w == 2)
                        flag = csp2(e,b,w);
                    else if(w == 3)
                        flag = csp3(e,b,w);
                    else if(w == 4)
                        flag = csp4(e,b,w);

                }
        }

}
