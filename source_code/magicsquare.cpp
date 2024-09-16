#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,k,l = 10000000000,m,x,sum = 0,flag = 0,r1,c1;
    cin>>n;
    x = (n + 1)* 2;
    long long int a[n][n],r[n] = {0},c[n] = {0}, sum1 = 0, sum2 = 0;
    k = (n*(n*n+1))/2;
    m= n*n;
    for(i = 0; i < n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 0) { r1 = i ; c1 = j ;}
            sum = sum+a[i][j];
            if(a[i][j] != 0 && a[i][j] < l && a[i][j]!= 0) l = a[i][j];
            else if( l == a[i][j])  flag =1;
        }
    }
    if(n == 1) cout<<1;
    else if(flag==1 && (m*l - sum) == l)
    {
        a[r1][c1] = l;
           for(j = 0 ; j < n ; j++)
     {
          for(i = 0; i < n ; i++)
          {
              c[j] = c[j] + a[i][j];
          }
     }
     for(i = 0; i < n ; i++)
     {
         for(j = 0; j < n ; j++)
         {
               r[i] = r[i] + a[i][j];
             if(i == j)
                sum1 = sum1 + a[i][j];
             if(j == n - 1 - i)
                sum2 = sum2 + a[i][j];
         }
     }
     if(sum1 == sum2)
           {
               for(i = 0; i < n ; i++)
               {
                   {
                       if(sum1 != c[i] || sum1 != r[i]) { cout<<-1; return 0 ; }
                   }
               }
               cout<<l;
           }
           else if(sum1 != sum2) { cout<<-1; return 0; }
        }

    else if((k*n-sum)> 0 && n!= 2)
    {
        a[r1][c1] = k*n-sum;
        for(j = 0 ; j < n ; j++)
     {
          for(i = 0; i < n ; i++)
          {
              c[j] = c[j] + a[i][j];
          }
     }
     for(i = 0; i < n ; i++)
     {
         for(j = 0; j < n ; j++)
         {
               r[i] = r[i] + a[i][j];
             if(i == j)
                sum1 = sum1 + a[i][j];
             if(j == n - 1 - i)
                sum2 = sum2 + a[i][j];
         }
     }
           if(sum1 == sum2)
           {
               for(i = 0; i < n ; i++)
               {
                   {
                       if(sum1 != c[i] || sum1 != r[i]) { cout<<-1; return 0 ; }
                   }
               }
               cout<<k*n-sum;
           }
           else if(sum1 != sum2) { cout<<-1; return 0; }
        }
        else cout<<-1;
}
