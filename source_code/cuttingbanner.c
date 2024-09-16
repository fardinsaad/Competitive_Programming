#include<stdio.h>
#include<string.h>
char A[100],B[] = "CODEFORCES",u,i,j,k;
int main(){
	scanf("%s",A);
	u=strlen(A);
	for(j=i=0;i<u;i++)
		if(B[j]==A[i]) j++;
	    else break;
	for(k=9,i=u-1;i>=0;i--,k--)
		if(B[k]==A[i]) j++;
	    else break;

	printf(j>=10?"YES":"NO");
	return 0;
}
