#include<stdio.h>
int sois(int x);
int display(int a[],int i);
int main()
{
    int n,t,x,y,sum;
    scanf("%d",&n);
    sum=sois(n);
    printf("%d",sum);
    return 0;
}
int sois(int x)
{
    int i,j,a[1000];
    for(j=2,i=0;j<2000;j++)
    {
        if(x%j==0)
        {
             a[i]=j;
             i++;
        }
    }
    return display(a,i);

}
int display(int a[],int i)
{
    int j,k,l,y,cnt=0,sum=0;
    for(j=0;j<i+1;j++)
    {
        cnt=0;
        for(l=1;l<=a[j];l++)
        {
            if(a[j]%l==0)
            {
                cnt++;
            }
        }
        if(cnt==2)
        {
            sum=sum+a[j];
        }
    }
    return sum;
}
