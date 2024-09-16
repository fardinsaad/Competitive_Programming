#include<stdio.h>
int main()
{
    int t,n,i,j,cnt0=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,cnt6=0,cnt7=0,cnt8=0,cnt9=0;
    scanf("%d",&t);
    while(t--)
    {
        cnt0=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,cnt6=0,cnt7=0,cnt8=0,cnt9=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            j=i;
            while(j>0)
            {
                int temp=j%10;
                if(temp<10)
                {
                    if(temp==0)
                        cnt0++;
                    else if(temp==1)
                        cnt1++;
                    else if(temp==2)
                        cnt2++;
                    else if(temp==3)
                        cnt3++;
                    else if(temp==4)
                        cnt4++;
                    else if(temp==5)
                        cnt5++;
                    else if(temp==6)
                        cnt6++;
                    else if(temp==7)
                        cnt7++;
                    else if(temp==8)
                        cnt8++;
                    else if(temp==9)
                        cnt9++;
                }
               j=j/10;
            }
        }
              printf("%d%d%d%d%d%d%d%d%d%d\n",cnt0,cnt1,cnt2,cnt3,cnt4,cnt5,cnt6,cnt7,cnt8,cnt9);

    }
}
