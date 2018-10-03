#include <bits/stdc++.h>
using namespace std;


int  main()
{
    ios_base::sync_with_stdio(false);
    long long ttt,iu,i,j,cp=0,ck=0,xx=0,yy=0,t;
    cin>>t;
    long long cn=0;
    for(ttt=1;ttt<=t;ttt++){
        long long n;
        cin>>n;
        long long ara[n+2][n+2];
        for(i=1;i<=n;i++) {
            for(j=1;j<=n;j++) {
                cin>>ara[i][j];
            }
        }
        long long ans[12];
        memset(ans,0,sizeof(ans));
        cout<<"Case "<<ttt<<": ";
        long long cnt=0;
        if(n<=4) { cnt=0; }
        else  {
            i = 1;
            j = 1;
            cnt = 0;

           for(xx=1;xx<=n-5+1;xx++) {
            for(yy=1;yy<=n-2+1;yy++) {
                    // 5 * 2
                for(i=xx,cp=0;cp<5 and i<=n;cp++,i++) {
                    for(j=yy,ck=0;ck<2 and j<=n;ck++,j++) {
                       ans[ara[i][j]]++;
                    }
                }
                long long flg=0;
                for(iu=1;iu<=10;iu++)
                {
                    if(ans[iu]!=1) { flg=1;break; }
                }
                if(!flg) cnt++;
                memset(ans,0,sizeof(ans));
            }
           }


           for(xx=1;xx<=n-2+1;xx++) {
            for(yy=1;yy<=n-5+1;yy++) {

                for(i=xx,cp=0;cp<2 and i<=n;cp++,i++) {
                    for(j=yy,ck=0;ck<5 and j<=n;ck=0,j++) {
                        ans[ara[i][j]]++;
                    }
                }
                long long flg=0;
                for(iu=1;iu<=10;iu++) if(ans[iu]!=1) { flg=1;break; }
                if(!flg) cnt++;
                memset(ans,0,sizeof(ans));
            }
           }

                if(n==10) { //cout<<"yoo1";
                    memset(ans,0,sizeof(ans));
                    for(i=1;i<=10;i++) {
                        for(j=1;j<=10;j++) {
                            ans[ara[i][j]]++;
                        }
                        long long flg=0;
                        for(iu=1;iu<=10;iu++) if(ans[iu]!=1) { flg=1;break; }
                        if(!flg) cnt++;
                        memset(ans,0,sizeof(ans));
                    }
                    //cout<<"yoo2";
                    memset(ans,0,sizeof(ans));
                    for(i=1;i<=10;i++) {
                        for(j=1;j<=10;j++) {
                            ans[ara[j][i]]++;
                        }
                        long long flg=0;
                        for(iu=1;iu<=10;iu++) if(ans[iu]!=1) { flg=1;break; }
                        if(!flg) cnt++;
                        memset(ans,0,sizeof(ans));
                    }
                   // cout<<"yoo3";
                }
        }
                cout<<cnt;
                if(ttt!=t)  cout<<"\n";

    }
}

/*
19
5
1 2 3 4 5
5 6 7 8 4
9 10 1 2 3
3 4 5 6 1
7 8 9 10 2

*/
