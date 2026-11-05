#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iCnt = 1;
    while(iCnt <= iNo)
    {
        if(iNo % iCnt == 0 && iCnt != iNo)
        {
            iMult = iMult * iCnt;
        }
        iCnt++;
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d\n",iRet);

    return 0;
}