#include <stdio.h>
int main()
{
	long int a,b,i;
	printf("\nEnter  intial number to find odd num :");
	 scanf("%ld",&a);
	printf("\nEnter final number to find odd num :");
	scanf("%ld",&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==1)
		printf("%d\t",i);
	}
	return 0;
  }
