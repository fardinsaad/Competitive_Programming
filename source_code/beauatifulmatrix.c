#include<stdio.h>
int main()
{
    int a[5][5],i,j,x,y,temp;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                x=i;
                y=j;
              //  printf("%d %d",x,y);

            }
        }
    }
    if(x>=2 && y>=2)
        temp=(x-2)+(y-2);
    else if(x>=2 && y<2)
        temp=(x-2)+(2-y);
    else if(x<2 && y>=2)
        temp=(2-x)+(y-2);
    else if(x<2 && y<2)
        temp=(2-x)+(2-y);
    printf("%d",temp);
   // main();
}
