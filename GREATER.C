#include<stdio.h>
void main()
{
 int a,b,c;
 printf("enter the numbers");
 scanf("%d%d%d",&a,&b,&c);

 a>b?(a>c ? printf("\n %d is greater",a) : printf("\n %d is greater",c)) : ( b>c ? printf("\n %d is greater ",b) : printf("\n %d is greater",c));
 /*ternary operator*/
}
