#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fPer = 0.0;

    if(iNo1 == 0)
    {
        return 0.0;
    }

    fPer = ((float)iNo2 / iNo1) * 100;

    return fPer;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.1f%%\n",fRet);

    return 0;
}