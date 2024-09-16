#include <stdio.h>

int main()
{
	int n, c = 0;

	scanf("%d", &n);
	while(n)
	{
		n = n&(n-1);
		c++;
	}
	printf("%d\n", c);

	main();
}
