#include<stdio.h>
#include<ctype.h>

void strlwrx(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        str[i] = tolower((unsigned char)str[i]);
        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    strlwrX(arr);

    printf("Modified string is: %s",arr);

    return 0;
}