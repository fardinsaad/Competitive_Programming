#include<stdio.h>
int main()
{
    long long int n,i,cnt1=0,cnt2=0;
    char ch;
    scanf("%lld",&n);
    getchar();
    for (i=0;i<n;i++)
    {
        scanf("%c",&ch);
        if(ch=='1') cnt1++;
        else if(ch=='0') cnt2++;

    }

    if (cnt2==cnt1) printf("0");
    else if (cnt1>cnt2) printf("%lld", cnt1-cnt2);
    else if (cnt2>cnt1) printf("%lld", cnt2-cnt1);

}
