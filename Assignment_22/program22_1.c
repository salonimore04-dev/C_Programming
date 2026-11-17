#include<stdio.h>

void Pattern(int iNo)
{
    int icnt = 0;
    for(icnt = 0; icnt < iNo; icnt++)
    {
        printf("%c\t",'A' + icnt);
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