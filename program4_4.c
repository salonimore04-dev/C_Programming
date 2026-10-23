#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligiblity(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}
int main()
{
    int iAge = 0;
    printf("Enter your Age: ");
    scanf("%d", &iAge);

    CheckVotingEligiblity(iAge);


    return EXIT_SUCCESS;
}