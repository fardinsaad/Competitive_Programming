#include<stdio.h>
#include<string.h>
char str[100][100];
void flood(int x,int y)
{
    if(str[x][y]=='X')return;
    str[x][y]='#';

    flood(x+1,y);
    flood(x-1,y);
    flood(x,y-1);
    flood(x,y+1);
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int r=0;
        while(gets(str[r]))
        {
            if(str[r][0]=='_')break;
            r++;
        }

        int i,j;
        for(i=0;i<=r;i++)
        {
            for(j=0; j<strlen(str[i]) ;j++)
            {
                if(str[i][j]=='*')flood(i,j);
            }
        }
        for(i=0;i<=r;i++)puts(str[i]);
        printf("\n");
    }
}

