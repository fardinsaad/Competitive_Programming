#include<stdio.h>
#include<algorithm>
int main()

{
    int n,cnt=1,i,j,k,a[1005],x=0,y,temp=0,temp1=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    std::sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            cnt++;
            //if(x<temp1) x=temp1;
            temp=0;
        }
        else if(a[i]==a[i+1])
        {
            temp1=++temp;
            if(x<temp1) x=temp1;
        }
    }
    printf("%d %d",x+1,cnt);
    main();

}

