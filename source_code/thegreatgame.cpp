#include<stdio.h>
#include<string.h>
int main()
{
	int i,a,b,length;
	char s1[1000],s2[1000];
	while(scanf("%s %s",s1,s2)!=EOF)
	{
		length=strlen(s1);
		for(i=0,a=0,b=0;i<length;i=i+2)
		{
			if(s1[i]=='8'&&s2[i]=='[')
				a++;
			if(s1[i]=='8'&&s2[i]=='(')
				b++;
			if(s1[i]=='['&&s2[i]=='(')
				a++;
			if(s1[i]=='['&&s2[i]=='8')
				b++;
			if(s1[i]=='('&&s2[i]=='8')
				a++;
			if(s1[i]=='('&&s2[i]=='[')
				b++;
		}
		if(a>b)
			printf("TEAM 1 WINS\n");
		else
			if(a<b)
				printf("TEAM 2 WINS\n");
			else
				printf("TIE\n");
	}
	return 0;
}
