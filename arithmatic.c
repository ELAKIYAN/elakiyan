#include<stdio.h>
#include<conio.h>
void main()
{
int n,p=1,d,sum=0,a;
clrscr();
printf("Enter n and d values");
scanf("%d %d ",&n,&d);
for(a=1;a<=n;a++)
{
sum=sum+p;
p=p+d;
}
printf("\n%d",sum);
getch();
}
