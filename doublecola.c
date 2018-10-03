#include<stdio.h>
#include<math.h>
int main()
{
     int n,i,last,cnt=0,dif,r,temp,a,b;
     scanf("%d",&n);
     for(i=1;;i++)
    {
        a=pow(2,i);
        last=5*(a-1);
        if(last>=n)
           break;
    }
    b=pow(2,i-1);
    dif=n-5*(b-1)-1;
    temp=dif/b;

    if(temp==0)
        printf("Sheldon");
    else if(temp==1)
        printf("Leonard");
    else if(temp==2)
        printf("Penny");
    else if(temp==3)
        printf("Rajesh");
    else if(temp==4)
        printf("Howard");

 //   main();
}
