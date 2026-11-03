#include<stdio.h>

double SquareMeter(float fArea)
{
    double dMeter = 0.0;
    dMeter = fArea * 0.0929;
    return dMeter;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Area in square meter is %lf\n",dRet);


    return 0;
}