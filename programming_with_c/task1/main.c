#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice ;
    int flag=0;
    do{
     printf(" \n New \n Display \n Exit ");
     choice=getch();
     switch(choice){
         case 'n':
         case 'N':
            printf("New is selected ");
            getch();
            system("cls");
            break;
         case 'd':
         case 'D':
            printf("Display is selected ");
            getch();
            system("cls");
            break;
         case 'e':
         case 'E':
            printf("Exit is selected ");
            flag =1;
            break;
         case 27:
            flag=1;
            break;
         default:
            printf("choice is invalid");
}
    }
    while(flag==0);
    return 0;
}
