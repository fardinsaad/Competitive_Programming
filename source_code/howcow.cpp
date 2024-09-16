#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,m,x,y,x1,x2,y1,y2,i,cnt = 1;
    cin>>t;
    while(cnt<=t) {
        cin>>x1>>y1>>x2>>y2;
        cout<<"Case "<<cnt<<":"<<'\n';
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>x>>y;
            if(x > x1 && x < x2 && y > y1 && y < y2)cout<<"Yes"<<'\n';
            else cout<<"No"<<'\n';
        }
        cnt ++;
    }
    return 0;
}
