#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j,k,rr,w,l;
	cin>>t;
	for(i=1;i<=t;i++) {
		int n;
		cin>>n;
		int ara[n+10];
		for(j=0;j<n;j++) cin>>ara[j];
		int q;
		cin>>q;
		int quer[q+10];
		for(k=0;k<q;k++) cin>>quer[i];
		for(k=0;k<q;k++) {
			int x = quer[k];
			w = 0; l = 0;
			for(j=0;j<n;j++) {
				rr = ara[j]/x;
				if(rr%2==1) w++;
				else l++;
			}
			cout<<"Case "<<i<<":\n";
			cout<<"Query "<<(k+1)<<": ";
			if(w>l) cout<<"Win\n";
			else cout<<"Lose\n";
		}
	}



}
