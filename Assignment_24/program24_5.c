#include<stdio.h>
#include<string.h>

void StrRevX(char *str)
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}