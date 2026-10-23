#include<stdio.h>
#include<stdlib.h>
 
void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater \n",iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater \n",iSecond);
    }
    else
    {
        printf("Both Numbers are Equal\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter First Number: ");
    scanf("%d",&iValue1);

    printf("Enter Second Number: ");
    scanf("%d",&iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}