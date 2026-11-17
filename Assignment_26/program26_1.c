#include<stdio.h>

void DisplayASCII()
{
    int i;

    printf("Decimal\tHexaDecimal\tOctal\tCharacter\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%X\t\t%o\t%c\n",i,i,i,(unsigned char)i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}