#include<bits/stdc++.h>
using namespace std;
long long int mx[105];
pair< long long int , pair<long long int,long long int> >pp[20000];
void initialize(long long int _n)
{
    for(long long int i = 0; i <= _n ; i++)
    {
        mx[i] = i;
    }
}
int root(long long int x)
{
    while(mx[x] != x)
    {
        mx[x] = mx[mx[x]];
        x = mx[x];
    }
    return x;
}
void uni(long long int x,long long int y)
{
    long long int p,q;
    p = root(x);
    q = root(y);
    mx[p] = mx[q];
}
long long int kruskal(pair< long long int, pair < long long int , long long int > > pp[], long long int _size)
{
    long long int cnt,cost = 0,x,y,i;
    for(i = 0; i < _size; i++)
    {
        x = pp[i].second.first;
        y = pp[i].second.second;
        cnt = pp[i].first;
        if(root(x) != root(y))
        {
            cost += cnt;
            uni(x,y);
        }
    }
        return cost;
}

int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,j,k,l,m = 0,n,x,y,w;
    cin >> t;
    for(i = 1; i <= t; i++)
    {
      //  cout << endl;
        cin >> n;
       // memset(pp,0,m);
        for(m = 0; ;m++)
        {
            cin >> x >> y >> w;
            if(x == 0 && y == 0 & w == 0 )
                break;
            pp[m] = make_pair(w,make_pair(x , y));
           // pp1[m] = make_pair(w,make_pair(x , y));
        }
        initialize(n + 2);
        sort(pp,pp + m);
        k = kruskal(pp, m);
        //cout << "k = " <<k << endl;
        initialize(n + 2);
       // sort(pp,pp + m);
        reverse(pp, pp + m);
        j = kruskal(pp , m);
        //cout << "j = " << j << endl;
        if((k + j) % 2 == 0) cout << "Case " << i << ": "<< (k + j)/ 2 << endl;
        else cout << "Case " << i <<": " << k + j << "/" << 2 <<endl;

    }
}





