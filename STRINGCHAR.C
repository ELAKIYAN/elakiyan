#include <stdio.h>
int main(void) 
{
	char a[50],b[50];
	int i,j,l1,l2,c=0;
	scanf("%s %s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{	
			if(a[i]!=b[i])
			{
				c=c+1;
			}
		}
		if(c==1)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	else
	{
		printf("no\n");
	}return 0;
}
