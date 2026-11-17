#include<stdio.h>

void Display(char ch)
{
    char cCnt;
    if(ch >= 'A' && ch <= 'Z')
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t",cCnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t",cCnt);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}