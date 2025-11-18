#include<stdio.h>

int factorial(int);

void main()
{
    int number, res;

    printf("\n Enter a number: ");
    scanf("%d", &number);

    printf("\n Number: %d", number);

    res = factorial(number);

    printf("\n Factorial is: %d", res);
}

int factorial(int n)
{
    int fact = 1;
    int i = 1;

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    return fact;
}