#include<stdio.h>

int main()
{
    long long int a,b;
    int t,r,i,j,k,s,cnt=0,p=1,v=1,sum=0;
    scanf("%d",&t);
    for(r=0;r<t;r++)
    {
        cnt=0;
        scanf("%lld %lld",&a,&b);
        if(a==0 && b==0)
        {
            printf("Case %d: %d\n",r+1,cnt);
        }
        else if(a!=0 && b!=0)
        {

            for(j=1;p<=a;j=(j*10)+1)
            {
                sum=sum+j;
                p++;
            }
            if(sum%3==0)
                cnt++;

                for(k=1;k<=b-a;k++)
                    {
                    for(s=a+1;v<=b-a;s++)
                        {
                            sum=(sum*10)+s;
                            if(sum%3==0)
                            {
                                cnt++;
                            }
                                v++;
                        }
                    }
            }
            printf("Case %d: %d\n",r+1,cnt);
        }


 return 0;

}
