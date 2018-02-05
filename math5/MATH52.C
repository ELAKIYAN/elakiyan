#include<stdio.h>
#include<math.h>
int main()
{
    int result,n,power;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the power of number");
    scanf("%d",&power);
    while(power!=0)
    {
        result*=n;
        power--;
    }
    printf("\n%d",result);
   return 0; 
}
