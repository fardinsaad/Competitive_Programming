#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int sum=0,sum1,sum2,x,y,i,j,flag=0;
    scanf("%s",str1);
    x=strlen(str1);
        //printf("%d",x);
        for(i=0;i<x;i++)
        {
            if(str1[i]>=65&&str1[i]<=90)
            {
                str1[i]=str1[i]+32;
               // sum=sum+st[i];
              //  printf("%d\n",sum);
            }
        }
     scanf("%s",str2);
       for(i=0;i<x;i++)
        {
            if(str2[i]>=65&&str2[i]<=90)
            {
                str2[i]=str2[i]+32;
               // sum=sum+st[i];
              //  printf("%d\n",sum);
            }
        }
          int value=strcmp(str1,str2);
          printf("%d",value);


}
