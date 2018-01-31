#include <stdio.h>
#include <stdlib.h>
int main()
{
    char arr[30],temp,i,l;
    printf("enter string");
    scanf("%s",&arr);
    l=strlen(arr);
    for(i=0;i<l;i=i+2){

            if(i%2==0){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
    }
    printf("%s",arr);
    return 0;
}
