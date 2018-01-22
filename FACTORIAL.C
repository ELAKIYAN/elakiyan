#include <stdio.h>
int main(void) 
{
int n,f=1;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
f=f*i;	
}
printf("%d",f);
	return 0;
}
