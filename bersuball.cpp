#include<bits/stdc++.h>
using namespace std;

int boys[110],girls[110];
int n,m,ans=-1;
int dp[101][101];

int rec(int i, int j){
    if(i==n || j==m) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int dif=fabs(boys[i]-girls[j]);
    cout << "Before ans: "<<ans<<" i: "<<i <<" boys " << boys[i] << " j: "<<j << " girls "<< girls[j]<<endl;
     ans=max(rec(i+1,j),rec(i,j+1));
    cout << "After ans: "<<ans<<" i: "<<i <<" boys " << boys[i] << " j: "<<j << " girls "<< girls[j]<<endl;
    if(dif<=1){
    cout << "Before ans in diff: "<<ans<<" i: "<<i <<" boys " << boys[i] << " j: "<<j << " girls "<< girls[j]<<endl;
        ans=max(ans,1+rec(i+1,j+1));
    cout << "After ans in diff: "<<ans<<" i: "<<i <<" boys " << boys[i] << " j: "<<j << " girls "<< girls[j]<<endl;
    }
    return dp[i][j]=ans;
}
int main()
{

    cin>>n;
    for(int i=0;i<n;i++) cin>>boys[i];
    cin>>m;
    for(int i=0;i<m;i++) cin>>girls[i];
    sort(boys,boys+n);
    sort(girls,girls+m);
    memset(dp,-1,sizeof dp);
    cout<<rec(0,0);


}
