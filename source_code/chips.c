#include<stdio.h>
int main()
{
    int x,y,sum=0,i,j;
    scanf("%d %d",&x,&y);
    j=(x*(x+1))/2;
   //if(j<=y){
    for(i=1;;i++)
    {
        sum+=i;

        if(sum==y)
        {
            printf("0");
            return 0;
        }
        else if(sum>y)
        {
            printf("%d",y-(sum-i));
            return 0;
        }
        if(sum%j==0)
        {
            i=0;
        }
    }
    }


