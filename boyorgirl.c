#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int cnt,i=0,j=1,x,temp=0,k=1;
    scanf("%s",&st);
    cnt=strlen(st);
   // printf("%d",cnt);
    for(;i<cnt-1;)
    {
        for(k=1;k<cnt-i;)
        {
            if(st[i]==st[j])
               {
                 temp++;
                 break;
                // printf("%d %d=%c %d=%c\n",temp,i,st[i],j,st[j]);
               }
            j++;
            k++;
        }

        ++i;
        j=i+1;
    }
    x=cnt-temp;
    if(x%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
   // printf("%d %d %d",temp,x,cnt);
    return 0;

}
