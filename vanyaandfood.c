#include<stdio.h>

int main()
{
    long long int n,h,t,i,j,k,cnt=0,sum=0,sum1=0,rem=0;

    scanf("%I64d %I64d %I64d",&n,&h,&t);

    long long int a[n];

    for(i=0;i<n;i++)scanf("%I64d",&a[i]);

    for(i=0;i<n;i++)
    {
        sum1=rem+a[i];

        if(sum1>h)
        {
            while(rem>0) { rem = rem - t; cnt++; }
            sum1=a[i];
            if(i==n-1) { while(sum1>0) { sum1 = sum1 - t; cnt++; } }
            if(i != n-1){ rem = sum1 - t; cnt++ ;}
        }
        else if(sum1<=h)
        {
            sum=sum1+a[i+1];
            if(sum>h)
            {
                rem=sum1-t;
                cnt++;
                //printf("1\n");
            }
            else if(sum==h)
            {
                while(sum>0){sum=sum-t;cnt++;}
                i++;
              //  printf("2\n");
            }
            else rem=sum1;
        }
    }
    printf("%d\n",cnt);
    main();
}
