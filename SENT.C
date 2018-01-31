#include<stdio.h>
int main()
{
    char s[1000000];
    int i;
    gets(s);
    if(s[0]>=97 && s[0]<=122)
    {
        s[0]=s[0]-32;
    }
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            if(s[i+1]>=97 && s[i+1]<=122)
    {
        s[i+1]=s[i+1]-32;
    }
        }
i++;

    }
    puts(s);
return 0;
}
