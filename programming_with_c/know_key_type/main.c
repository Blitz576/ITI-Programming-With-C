
/**
#include <stdio.h>
#include <stdlib.h>
#define null -32
int main()
{
    char key;
    ///scan the character
    printf("please enter the character you want to know its type : ");
    key = getch();

    ///determining the type of the key

    if(key == null ) ///Extented key
    {

        key = getch();
         printf("\n the key is extented with value: %d",key);
    }
    else {   /// Normal key
        printf("\n the key is normal with value: %c",key);
    }
    return 0;
}
*/

