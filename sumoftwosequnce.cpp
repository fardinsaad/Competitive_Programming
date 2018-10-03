#include<bits/stdc++.h>
using namespace std;

int main()
{
     long long int i,j,k,l,m,n,o,p,t,d1,d2,a1,a2,n1,n2,s1,s2,s;
	 scanf("%lld", &t);
	for(i = 1; i <= t; i++)
    {
       scanf("%lld %lld %lld %lld %lld %lld",&a1,&d1,&n1,&a2,&d2,&n2);
         s1 = n1*a1+d1*((n1-1)*n1)/2;
		s2 = n2*a2+d2*((n2-1)*n2)/2;
        s = s1 + s2;
        printf("Case %lld: %lld\n",i,s);
    }
   return 0;

}

