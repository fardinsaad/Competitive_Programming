#include<bits/stdc++.h>
using namespace std;
long long int n,j,i,k,m,prod3 = 1,bbm;
double prod1 = 1.0,prod2 = 1.0,g = 2.236067977,s;
long long int BigMod(long long B,double P,long long M);
int main()
{
    cin>>n>>k>>m;
    for(i = 1; i <= n + 2; i++) prod1 = prod1*1.6180339;
    for(i = 1; i <= n + 2; i++) prod2 = prod2*(-0.6180339);
    s = ((prod1 - prod2)/g);
    //cout<<s<<endl;
    bbm = BigMod(k,s,m);
    cout<<bbm;



}
long long int BigMod(long long B,double P,long long M)
{
	long long int R=1;
	//cout<<P;
	while(P>0)
	{
		if(P%2==1)
		{
			R=(R*B)%M;
			//cout<<B<<" "<<R<<" "<<1<<" "<<M;
		}
		P/=2;
		B=(B*B)%M;
		//cout<<B<<endl;
	}
	//cout<<R<<" "<<2<<endl;
	return R;
}

