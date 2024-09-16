#include<stdio.h>
#include<algorithm>
main()
{
       int n,i,j,t,p=0;
       scanf("%d",&n);
       int a[n];
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
           if(a[i]>0) p++;
        }
       std::sort(a,a+n);
       printf("1 %d\n",a[0]);
       if(p==0)
       { printf("2 %d %d\n",a[1],a[2]); printf("%d",n-3); for(i=3;i<n;i++) printf(" %d",a[i]); }
       else { printf("1 %d\n",a[n-1]); printf("%d",n-2); for(i=1;i<n-1;i++)  printf(" %d",a[i]);}
       return 0;
}
