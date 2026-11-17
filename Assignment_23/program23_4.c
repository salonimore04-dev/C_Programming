#include<stdio.h>
#include<ctype.h>

void DisplayDigit(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(isdigit((unsigned char)str[i]))
        {
            printf("%c",str[i]);
        }
        i++;
    }
    printf("\n");
}
int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);


    return 0;
}