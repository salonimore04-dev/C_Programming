#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if((iValue % 5) == 0)
    {
        printf("It is Divisible\n");
    }
    else
    {
        printf("It is not Divisible\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
