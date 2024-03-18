#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define string(name) char name[10]

/// Concatinte strings
int main()
{
    string(fname);
    string (lname);
    char full_name[20]="";

    ///scan names from user
    printf("please enter your first name : ");
    scanf("%s",fname);
    printf("\n please enter your last name : ");
    scanf("%s",lname);
    strcat(full_name,fname);
    strcat(full_name," ");
    strcat(full_name,lname);
    printf("your real name is : %s",full_name);
    return 0;
}
