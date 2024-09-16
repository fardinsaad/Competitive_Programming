#include<stdio.h>
int main()
{
    int y,a[100],i=0,j,x,n,cnt=0,k;
    scanf("%d",&y);
    while(1)
    {
        y++;
        x=y;
        while(x>0)
        {
        a[i]=x%10;
        x=x/10;
        i++;
        }
       /* for(i=0;i<4;i++)
        {
            printf("%d",a[i]);
        }
        printf("\n%d",y);
        break;*/
      for(j=0;j<3;j++)
        {
            for(k=0;k<3-j;k++)
            {
                if(a[k]>a[k+1])
                {
                    int temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                    //printf("%d",a[j]);
                }
                //printf("%d",cnt);
            }
        }
       for(j=0;j<3;j++)
        {
            if(a[j]==a[j+1])
            {
                cnt=1;
                break;
            }
        }

        if(cnt==0)
           {
              printf("%d",y);
              break;
           }
        else if(cnt==1)
        {
            cnt=0;
            i=0;
        }
    }
    main();
}
