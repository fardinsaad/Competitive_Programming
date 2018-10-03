#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
	long long int i,t,s,zz,hh,u_v,l_v,sds,n,p;
	cin>>t;
	for(hh=1;hh<=t;hh++) {
		s = 0;
		cin>>n>>p;
		cout<<"Case "<<hh<<": ";
		if(n==1) {
			u_v = 100;
			l_v = 100-p;
			sds = gcd(u_v,l_v);

			cout<<(u_v/sds)<<"/"<<(l_v/sds)<<"\n";
			continue;
		}
		int xx,yy;
		for(i=2;i<=n-2;i++) {
			xx = gcd(i,i+1);
			yy = i*(i+1)/xx;
		}
        s = (1+n)*yy;
        //cout<<yy<<"sg\n";
        for(i=2;i<n;i++) {
			zz = n*(yy/i);
			s+=zz;
        }
        //cout<<s<<"/"<<yy<<"\n";
		//cout<<s<<"\n";
		int pp = (100-p);
		int u_v = s*100;
		int l_v = pp*yy;
		int sds = gcd(u_v,l_v);

		cout<<(u_v/sds)<<"/"<<(l_v/sds)<<"\n";
	}



}

