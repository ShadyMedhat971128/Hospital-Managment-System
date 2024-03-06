
#include "HospitalSystem.h"

char login(char* username ,char*password)
{ 
    if(strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0)
        {
            printf("Login successful!\n");
            return 1;
        }
}