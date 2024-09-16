#include<stdio.h>

int main() {

	int i,j,k,l,s,n;
	int a[1000][2];
	scanf("%d %d", &s, &n);
	for( i = 0 ; i < n ; i++)
		scanf("%d %d", &a[i][0], &a[i][1]);
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(a[j][0] > a[j+1][0]) {
				k = a[j][0];
				a[j][0] = a[j+1][0];
				a[j+1][0] = k;
				k = a[j][1];
				a[j][1] = a[j+1][1];
				a[j+1][1] = k;
			}
	i = 0;
	while(s > a[i][0] && i < n) {
		s += a[i][1];
		i++;
	}
	if( i == n) printf("YES\n");
	else printf("NO\n");
	return 0;
}
