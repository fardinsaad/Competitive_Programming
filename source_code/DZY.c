#include<stdio.h>
#include<string.h>
int main()
{
	int l,k,max,i,a[26],b;
	long long int sum;
	char s[1001];
	scanf("%s",s);
	l = strlen(s);
	scanf("%d",&k);
	max = -1;
	sum = 0;
	for(i=0;i<26;i++)
	{
		scanf("%d",&a[i]);
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	for(i=0;i<l;i++)
	{
		b = s[i] - 97;
		sum += a[b]*(i+1);
	}
	for(i=l;i<l+k;i++)
	{
		sum += max*(i+1);
	}
	printf("%I64d\n",sum);
	return 0;
}
