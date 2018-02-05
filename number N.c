#include <stdio.h>
void  main(void) 
{
	int a[10],i,n,min;
	 printf("\nenter the number ");
	 scanf("%d",&n);
  	printf("\nenter the array elements");
	 for(i=0;i<n;i++)
	{
		 scanf("%d",&a[i]);
		
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
	if(a[i]<min)
{
	 min=a[i];
}
}
  printf("\nminimum value is %d",min);
	return 0;
}
