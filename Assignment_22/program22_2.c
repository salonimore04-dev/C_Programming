#include<stdio.h>

void Pattern(int iNo)
{
    int icnt = 0;
    for(icnt = iNo; icnt >= 1; icnt--)
    {
        printf("%d\t#\t",icnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}