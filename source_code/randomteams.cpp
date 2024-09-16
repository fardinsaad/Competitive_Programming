# include <stdio.h>

int main()
{
    long long int a,b,x,y,max,min;
	scanf("%I64d %I64d", &a, &b);
	x=a/b;
	y=a%b;
	min=(((x)*(x-1))/2)*b + y*x;
	max=((a-b+1)*(a-b))/2;
	printf("%I64d %I64d\n",min,max);
	return 0;
}
