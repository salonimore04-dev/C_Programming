#include<stdio.h>

void Display(char ch)
{
    printf("Decimal :%d\n",(unsigned char)ch);
    printf("Octal :%o\n",(unsigned char)ch);
    printf("HexaDecimal :0X%X\n",(unsigned char)ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}