#include<stdio.h>
#include<string.h>
int main()
{
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0,i,n,h,e,l1,l2,cnt5=0,j,r,s,m,o;
    char st[100];
    scanf("%s",&st);
    n=strlen(st);
    for(i=0;i<n;i++)
    {

        if(st[i]=='h')
            {
                cnt1++;
                if(cnt1==1)
                    {
                        h=i;
                        break;
                    }
            }
    }
    for(j=h+1;j<n;j++)
        {
            if(st[j]=='e')
            {
                cnt2++;
                if(cnt2==1)
                {
                    e=j;
                    break;
                }
            }
        }
      for(m=e+1;j<n;m++)
        {
            if(st[m]=='l')
            {
                cnt3++;
                if(cnt3==1)
                {
                    l1=m;
                    break;
                }
            }
        }
        for(r=l1+1;r<n;r++)
        {
            if(st[r]=='l')
            {
                cnt4++;
                if(cnt4==1)
                {
                    l2=r;
                    break;
                }
            }
        }
         for(s=l2+1;s<n;s++)
        {
            if(st[s]=='o')
            {
                cnt5++;
                if(cnt5==1)
                {
                    o=s;
                    break;
                }
            }
        }
     //   if(h<e && h<l1 && h<l2 && h<o && e<l1 && e<l2 && e<o && l1<l2 && l1<o && l2<o)
     if(cnt1==1 && cnt2==1 && cnt3==1 && cnt4==1 && cnt5==1)
            printf("YES");
        else
            printf("NO");
  // main();
}
