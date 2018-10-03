#include<stdio.h>
#include<string.h>
int main()
{
    char st[205],a[205];
    int i,j,k,temp=0;
    scanf("%s",st);
    k=strlen(st);

    for(i=0;i<k;i++)
    {
        if(st[i]=='W' && st[i+1]=='U' && st[i+2]=='B')
        {
            i+=2;
        }
        else if(temp==0)
        {
            temp++;
            if(temp==1)
            {
                for(j=0;;j++)
                {
                    if((st[i]=='W' && st[i+1]=='U' && st[i+2]=='B')||st[i]=='\0')
                        {
                            break;
                        }
                    a[j]=st[i];
                    i++;
                }
                i--;
            }
        }

        else if(temp>=1)
            {
                printf("%d ",j);
                a[j]=' ';
                j++;
                for(;;j++)
                {
                    if(i<=k-3)
                    {
                        if ((st[i]=='W' && st[i+1]=='U' && st[i+2]=='B')||st[i]=='\0')

                           {
                               if(st[i]=='\0') goto hell;
                             break;
                           }
                        a[j]=st[i];
                        i++;
                    }
                    else if(i<k)
                    {
                        if(i==k)
                        {
                            break;
                        }

                        a[j]=st[i];
                        i++;
                    }
                }
                i--;

            }

        }
        //printf("%d",i);
   // a[j]='\0';
    //printf("%d",j);
    hell:
    for(i=0;i<j;i++)
    {
        printf("%c",a[i]);
    }

}
