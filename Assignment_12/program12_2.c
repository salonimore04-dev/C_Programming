#include<stdio.h>
#define TRUE 1
#define FALSE 0
int CheckZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return TRUE;
    }
    while(iNo != 0)
    {
            iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}
int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("There is Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}