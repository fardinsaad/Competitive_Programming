#include<stdio.h>
int main()
{
	long long int n,i,a[100000],flag=0;
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf("%d", & a[i]);
		if (a[i]==1)
		{
			flag=1;
			break;
		}
	}
		if (flag==1) printf("-1");
		else printf("1");
}
