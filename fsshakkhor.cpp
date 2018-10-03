#define fRead(x)  freopen(x,"r",stdin)
#define fWrite(x) freopen (x,"w",stdout)

#define LL long long
#define ULL unsigned long long
#define ff first
#define ss second
#define pb push_back
#define INF 2e7
#define PI acos(-1.0)

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define SQR(a) ((a)*(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,b) for(int i=0;i<b;i++)
#define MEM(a,x) memset(a,x,sizeof(a))

#define scanI(a) scanf("%d",&a)
#define scanI2(a,b) scanI(a) , scanI(b)
#define scanI3(a,b,c) scanI(a), scanI(b), scanI(c)
#define scanI4(a,b,c,d) scanI(a), scanI(b), scanI(c), scanI(d)

#define scanL(a) scanf("%I64d",&a)
#define scanL2(a,b) scanL(a) , scanL(b)
#define scanL3(a,b,c) scanL(a), scanL(b), scanL(c)
#define scanL4(a,b,c,d) scanL(a), scanL(b), scanL(c), scanL(d)

#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())

#define FastRead ios_base::sync_with_stdio(0);cin.tie();

#include<bits/stdc++.h>

using namespace std;
int n;
LL ara[505][505];
int row,col;
int main()
{
    FastRead

    cin >> n;
    if(n==1)
    {
        cout << 1;
        return 0;
    }
    REP(i,n)
    {
        REP(j,n)
        {
            cin >> ara[i][j];
            if(ara[i][j]==0){row=i;col=j;}
        }
    }
    set<LL>st;
    for(int i=0;i<n;i++)
    {
        if(i==row)continue;
        LL sum = 0;
        for(int j=0;j<n;j++)
        {
            sum += ara[i][j];
        }
        st.insert(sum);
    }
    for(int i=0;i<n;i++)
    {
        if(i==col)continue;
        LL sum = 0;
        for(int j=0;j<n;j++)
        {
            sum += ara[j][i];
        }
        st.insert(sum);
    }
    if(st.size()>1)
    {
        cout << -1;return 0;
    }
    LL s=0;
    for(int i=0;i<n;i++)
    {
        s+=ara[row][i];
    }
    LL need = *st.begin()-s;

    if(need<=0)
    {
        cout << -1;
        return 0;
    }
    ara[row][col]=need;
    LL a=0,b=0;
    for(int i=0;i<n;i++)
    {
        a+= ara[i][i];
        b+= ara[i][n-i-1];
    }
    if(a!=*st.begin() or b!=*st.begin())
    {
        cout << -1;
        return 0;
    }
    cout << need;


}

