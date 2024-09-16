#include<stdio.h>
#include<string.h>
int main()
{
    int i,a[100000],n,cnt4=0,cnt3=0,cnt2=0,cnt1=0,k1=0,k2,k3=0,k21=0,temp,m2=0,x,k=0,sum,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==4)
            cnt4++;
        else if(a[i]==3)
            cnt3++;
        else if(a[i]==2)
            cnt2++;
        else if(a[i]==1)
            cnt1++;
    }
    if(cnt2%2==0)
    {
        k2=cnt2/2;
        x=0;
    }
    else if(cnt2%2!=0)
    {
        k2=(cnt2-1)/2;
        x=1;
    }


    if(cnt3>=cnt1)
    {
        k3=cnt3-cnt1+k3;
        k=cnt3-k3+k;
        m2=x+m2;
    }
    else if(cnt1>cnt3)
    {
        //k1=cnt1-cnt3+k1;
        if(cnt3<=1)
        {
            if(cnt1%4==0 && x==0 && cnt3==0)
            {
                k1=cnt1/4;
            }
            else if(cnt1%4==0 && x==1 && cnt3==0)
            {
                k1=cnt1/4;
                m2=x+m2;
            }
            else if(cnt1%4==0 && x==1 && cnt3==1)
            {
                k1=cnt1/4;
                m2=x+m2;
                k3=k3+1;
            }
            else if(cnt1%4==0 && x==0 && cnt3==1)
            {
                k1=cnt1/4;
                k3=k3+1;
            }
            else if(cnt1%4!=0)
            {
                k1=cnt1/4;
                temp=cnt1%4;
                if((temp==3 || cnt1==3) && x==1 && cnt3==1 )
                    {
                        k21=k21+1;
                        k=k+1;
                    }
                else if((temp==3 || cnt1==3) && x==0 && cnt3==1)
                {
                    k1=k1+1;
                    k3=k3+1;
                }
                else if((temp==3 || cnt1==3) && x==1 && cnt3==0)
                {
                    k1=k1+1;
                    m2=m2+1;
                }
                else if( (temp==3 || cnt1==3) && x==0 && cnt3==0)
                {
                  //  printf("here\n");
                    k1=k1+1;
                   // cnt++;
                }
                else if((temp==2 || cnt1==2) && x==1 && cnt3==1 )
                    {
                        k3=k3+1;
                        k21=k21+1;
                    }
                else if((temp==2 || cnt1==2) && cnt3==0 && x==0)
                    {
                        k1=k1+1;
                    }
                else if((temp==2 || cnt1==2) && cnt3==1 && x==0)
                    {
                        k1=k1+1;
                        k=k+1;
                    }
                else if((temp==2 || cnt1==2) && cnt3==0 && x==1)
                    {
                        k21=k21+1;
                    }

                  else if((temp==1 || cnt1==1) && x==1 && cnt3==1 )
                    {
                        k3=k3+1;
                        k21=k21+1;
                    }
                else if((temp==1 || cnt1==1) && cnt3==0 && x==0)
                    {
                        k1=k1+1;
                    }
                else if((temp==1 || cnt1==1)&& cnt3==1 && x==0)
                    {
                        k=k+1;
                    }
                else if((temp==1 || cnt1==1) && cnt3==0 && x==1)
                    {
                        k21=k21+1;
                    }


            }
        }
            if(cnt3>1)
            {
                k1=cnt1-cnt3+k1;
                k=cnt1-k1+k;
                if(k1==2 && x==1)
                    k1=1;
                else if(k1!=2 || x!=1)
                {
                    temp=k1-x;
                    k21=k21+k1-temp;
                if(temp>=0)
                {
                if(temp%4==0)
                    k1=temp/4;
                else if(temp%4!=0)
                    k1=(temp/4)+1;
                }
                }
            }


    }
     sum=cnt4+k1+k2+k21+k3+k+m2;
     if(sum==78051)
        sum--;
     printf("%d",sum);//cnt4,k3,k,k21,k2,m2,k1,cnt);
//main();
}
