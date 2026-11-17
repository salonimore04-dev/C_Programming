#include<stdio.h>


void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
          printf("Your exam at 7 AM");
          break;

        case 'B':
          printf("Your exam at 8.30 AM");
          break;

        case 'C':
          printf("Your exam at 9.20 AM");
          break;

        case 'D':
          printf("Your exam at 10.30 AM");
          break;

        default:
          printf("Invalid Division");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division:");
    scanf(" %c",&cValue);

    cValue = toupper(cValue);

    DisplaySchedule(cValue);

    return 0;
}
