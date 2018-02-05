#include <stdio.h>
int main()
{
    int A, B, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &A);

    B = A;

    while (B != 0)
    {
        remainder = B%10;
        result += remainder*remainder*remainder;
        B /= 10;
    }

    if(result == A)
        printf("%d is an Armstrong number.",A);
    else
        printf("%d is not an Armstrong number.",A);

    return
