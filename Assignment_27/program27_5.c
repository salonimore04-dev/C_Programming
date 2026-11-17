#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(end >= start)
    {
        printf("%c",*end);
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}