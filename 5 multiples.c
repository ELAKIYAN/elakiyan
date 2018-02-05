#include <stdio.h>
int main(void)
{
	int i,n,k=5,sum=1,count=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1;i<=5;i++)
	{
		sum=i*5;
		count++;
		printf("\n %d",sum);
	}
	
	return 0;
}
