#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k = 0,s = 1,temp,mod,sum = 0,flag = 0,cnt = 0,a = 1000,v =0;
    scanf("%d %d",&n,&m);
    getchar();
    int row[n+2] ={0},col[m+2],col1[m+2];
    char st[n+5][m+5];
    for(i = 0; i< n; i++)
    {
        scanf("%s",st[i]);
    }
        for(i = 0; i < n; i++)
    {
        for(j = 0; j < m ; j++)
        {
            if(st[i][j] == '*')
            {
                ++row[i] ;
                ++k;
                col1[v++] = j;
                if(flag ==0) { temp = j; flag = 1; col[0] = j; continue;}
            }
            if( flag == 1 && j==temp &&st[i][j] == '*')
            {
                col[s++] = j;
            }
        }
    }
    if(k == 0) cout<<"YES\n"<<k+1<<" "<<k+1;
    else{
    for( i = 0; i < v; i++)
    {

    }
    for( i = 0; i < s; i++ )
   {
        sum = sum + col[i];
    }
    sum = sum/s;
    if(sum != col[0]) cout<<"NO\n";
    else
    {
        for(i =0; i < n; i++)
        {
            if(row[i] > 1) {cnt++; a = i ;}
            else if(cnt ==0) a=min(row[i],a);
        }
        if(cnt > 1) cout<<"NO\n";
        else cout<<"YES\n"<<a+1<<" "<<sum+1;
    }
    }
}
