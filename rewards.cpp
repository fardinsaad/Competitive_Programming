#include<stdio.h>

int main()
{
    int a[4],b[4],n,i,j,k,sum1 = 0,sum2 = 0,temp1,temp2,mod1 = 0, mod2 = 0;;

    for( i = 0 ; i < 3 ; i++) { scanf("%d",&a[i]) ; sum1 = sum1 + a[i] ;}
    for( i = 0 ; i < 3 ; i++) {scanf("%d",&b[i]); sum2 = sum2 + b[i] ;}
    scanf("%d",&n);
    temp1 = sum1/5;
    if(temp1 == 0 && sum1!= 0) ++temp1;
    temp2 = sum2/10;
      if(temp2 == 0 && sum2!= 0) ++temp2;
    if( sum1 >=5 ) { mod1 = sum1 % 5; if(mod1 > 0) mod1 = 1 ;}
    if( sum2 >=10 ) { mod2 = sum2 % 10; if(mod2 > 0) mod2 = 1 ;}
    temp1 = temp1 + mod1;
    temp2 = temp2 + mod2;
    if(temp1 + temp2 <= n) printf("YES\n");
    else printf("NO\n");
   // main();


}
