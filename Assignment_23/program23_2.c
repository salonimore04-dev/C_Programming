#include<stdio.h>
#include<ctype.h>

void struprx(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        str[i] = toupper((unsigned char)str[i]);
        i++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is: %s",arr);

    return 0;

}