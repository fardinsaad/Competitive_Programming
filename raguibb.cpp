#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000005];
	gets(a);
	long long int i,j=0,k=0,l=strlen(a);
	for (i=0;i<l;i++)
	{
		if (a[i]==')')
		{
			if (j>0)
			{
				j--;
				k++;
			}
		}
		else j++;
	}
	printf("%lld",k*2);
}
