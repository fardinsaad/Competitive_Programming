#include<stdio.h>
int main()
{
	double l, p, q;
	scanf("%lf %lf %lf", &l, &p, &q);
	printf("%lf\n", l*p/(p+q));
	return 0;
}
