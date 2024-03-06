
#include "HospitalSystem.h"

char login(char* username ,char*password)
{ 
    if(strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0)
        {
            printf("Login successful!\n");
            return 1;
        }
}

void printLine()
{
    for(int i = 0; i < 80; i++)
        printf("-");
        printf("\n");
}