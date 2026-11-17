#include<stdio.h>
#include<ctype.h>

void strtogglex(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(islower((unsigned char)str[i]))
        {
            str[i] = toupper((unsigned char)str[i]);
        }
        else if(isupper((unsigned char)str[i]))
        {
            str[i] = tolower((unsigned char)str[i]);
        }
        i++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Modified string is: %s",arr);
    
    return 0;
}