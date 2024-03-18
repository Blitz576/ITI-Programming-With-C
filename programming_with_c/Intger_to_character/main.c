//#include <stdio.h>
//
//int main() {
//    int num;
//    scanf("%d",&num);
//
//    printf("character of the number = %c",num);
//
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    int flag=1;
    do{
        system("cls");
        printf(" \n New \n Display \n Exit :");
        choice = getchar();
        switch(choice){
            case 'n':
            case 'N':
                printf("New is selected");
                getch();
                break;
            case 'd':
            case 'D':
                printf("Dispaly is selected");
                getchar();
                break;
            case 'e':
            case 'E':
                flag=0;
                printf("Exit is selected");
                break;

        }

    }
    while(flag);
    return 0;
}