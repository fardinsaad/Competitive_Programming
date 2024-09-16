#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,flag = 0;
    cin>>n;
    char a[n][5];
    for(i = 0;i < n; i++)
    {
        scanf("%s",a[i]);
    }
    for(i = 0; i < n;i++)
    {
        if(a[i][0] == 'O' && a[i][1] == 'O')
          { a[i][0] = '+' ; a[i][1] = '+'; flag  = 1 ;break ; }
        else if(a[i][3] == 'O' && a[i][4] == 'O')
         { a[i][3] = '+' ; a[i][4] = '+'; flag = 1; break ; }
    }
    if(flag == 0) cout<<"NO";
    else
    {
     cout<<"YES\n";
          for(i = 0;i < n; i++)
    {
        for(j = 0 ; j < 5; j++) printf("%c",a[i][j]);
        printf("\n");
    }
    }
}
