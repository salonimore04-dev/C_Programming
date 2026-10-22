#include<stdio.h>

void PrintEven(int iNo)
{
    int icnt = 0;
    if(iNo <= 0)
    {
        return;
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("%d\t",icnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}