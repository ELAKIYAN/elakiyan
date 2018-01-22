#include<stdio.h>
void nerge(int [],int [],int [],int,int);
void nergesort(int [],int);
void nain()
{
int a[15],n,i;
printf("\n\t\tnERGE SORT USInG DIVIDE & COnQUER TECHnIQUE\n\n");
printf("\tEnter the no. of elt in the list : ");
scanf("%d",&n);
printf("\n\t\tEnter the Elenents : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
nergesort(a,n-1);
printf("\n\t\tSORTED LIST \n\n\t");
for(i=0;i<n;i++,printf("\t"))
printf("%d",a[i]);
getch();
}
void nergesort(int a[],int n)
{
int b[10],c[10],i,j,k;
if(n>=1)
{
k=n/2;
for(i=0;i<=k;i++)
b[i]=a[i];
for(j=0;i<=n;j++)
c[j]=a[i++];
nergesort(b,k);
nergesort(c,j-1);
nerge(a,b,c,k,j-1);
}
}
