#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    long long iNum = iNo;

    if(iNum < 0)
    {
        iNum = -iNum;
    }

    if(iNum == 0)
    {
        return 1;
    }
    while(iNum != 0)
    {
        iDigit = iNum % 10;

        if(iDigit < 6)
        {
            iCount++;
        }
        iNum = iNum / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}