#include<stdio.h>
int main()
{
    int n,i,num=0,temp,x,den,j;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        temp=n;
        while(temp>0)
        {
            x=temp%i;
            num=num+x;
            temp=temp/i;
        }
       // printf("%d=%d\n",i,num);
    }
    for(j=n-2;j>=1;j--)
    {
        if(num%j==0 && (n-2)%j==0)
            break;

    }
    num=num/j;
    den=(n-2)/j;
    printf("%d/%d\n",num,den);
 //   main();
}
