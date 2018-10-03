#include<stdio.h>

int main()
{
    long long int n,s,t,i,j,k,cnt=0,s1;

    scanf("%I64d %I64d %I64d", &n, &s, &t);

    long long int p[n];

    for( i = 1; i <= n ; i++)  scanf("%I64d",&p[i]);

    s1=s;

    if(s1 == t)printf("0\n");

    else {
    while( 1 )
    {
        s1 = p[s1] ;
       // printf("%I64d %I64d",s1,s);
       // break;
       if( s1 != t) cnt++;
        if( s1 == s){ printf("-1\n"); return 0 ; }
        if( s1 == t) { ++cnt; printf("%I64d\n",cnt); return 0; }
    }
    }
   // main();
}
