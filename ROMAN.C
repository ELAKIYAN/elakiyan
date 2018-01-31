#include<stdio.h>
#include<string.h>
int main()
{
	
    char a[100];
        int p=0 , i;

    gets(a);
   
    for(i=0 ; i < a[i] != '\0' ; i++)
{
	if(a[i] == 'i'){
	
	
	p= p+1;
}

	else if( a[i] == 'v') 
{
	p=p+5;
}
	else if( a[i] == 'x')
{
		p= p + 10;	
	}
}
 
  for(i=0 ; i < a[i] != '\0' ; i++)
{
	if(a[i] == 'i' && (a[i+1] == 'v' ||   a[i+1]== 'x'))
	p = p-2;
	}
	   
	printf("%d\n",p);
}
